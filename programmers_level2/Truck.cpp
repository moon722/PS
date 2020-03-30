//
// Created by ������ on 2020-03-12.
//

//programmers level2 �ٸ��� ������ Ʈ��


//best solution : �ʻ��ϱ�->ok
#include <string>
#include <vector>
#include <queue>

using namespace std;
int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;
    int tot_w;

    int t_front = 0;
    int t_cur = 0;

    int sec = 0;

    queue<int> q;

    while( t_front != truck_weights.size())
    {
        if(!q.empty() && (sec - q.front() == bridge_length ))
            //q�� ����ְ� �����ʿ��� ť�� ù��°�� ����???
        {
            tot_w -= truck_weights[t_front];
            ++t_front;
            q.pop();
            //�ٸ��� ���� ó���� �ִ� Ʈ���� ������ ���������� ��������
            //���� ���Կ��� Ʈ���� ���� ����
            //ť���� ���� �տ��ִ� �ε��� t_front ++
            //ť���� pop
        }
        if(t_cur != truck_weights.size() && tot_w + truck_weights[t_cur] <= weight)
            //��ٸ��� �ִ� Ʈ���߿� ���� �տ��ִ� �ε��� t_cur
            //���繫�Կ��� t_cur�� ���Ը� �������� ���밡���ϸ�
        {
            q.push(sec);
            tot_w += truck_weights[t_cur];
            t_cur++;
        }
        ++sec;
    }
    answer = sec;
}

/* mysolution : testcase �ϳ��� �¾Ҵµ� �������� �ð��ʰ�

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    int index = 0;
    int cur_weight = truck_weights[index];
    int sec = 1;
    vector<int> truck_length(truck_weights.size(),bridge_length);
    truck_length[index]--;
    while(truck_length[truck_weights.size()-1] >0) {
        if (cur_weight + truck_weights[index + 1] <= weight) {
            index++;
            q.push(truck_weights[index]);
            cur_weight += truck_weights[index];
            sec++;
            for (int k = index; k > index - q.size(); k--) {
                truck_length[k]--;
                if (truck_length[k] == -1) {
                    cur_weight -= q.front();
                    q.pop();
                }
            }
        } else {
            sec++;
            for (int k = 0; k < q.size(); k++) {
                truck_length[k]--;
                if (truck_length[k] == -1) {
                    cur_weight -= q.front();
                    q.pop();
                }
            }
        }
    }

    return sec;
}
*/
