//
// Created by ������ on 2020-03-14.
//

//programmers level2 �� �ʰ�
//      heap

// best solution �켱���� ť �ڵ����� ������������ ����
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;

    int lowlow_scoville; // ���� ���� ���� ������ ���ں� ����
    int low_scoville; // �ι�°�� ���� ���� ������ ���ں� ����
    // �켱���� ť�� �̿��Ͽ� �ڵ����� ������������ ����
    priority_queue<int,vector<int>,greater<int>> pq(scoville.begin(),scoville.end());

    //���� ���� ���� ������ ���ں� ������ K���� ���ٸ� �ݺ�
    while(pq.top() < K)
    {
        if(pq.size() == 1) return answer = -1;
        //���� ���� ���� ������ ����
        lowlow_scoville = pq.top();
        pq.pop();

        //�ι�°�� ���� ���� ������ ����
        low_scoville = pq.top();
        pq.pop();

        pq.push(lowlow_scoville+(low_scoville*2));

        answer++;

    }
    return answer;

}


//mysolution 16/15, ȿ���� 5/0
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    while(scoville.size()!=1)
    {
        sort(scoville.begin(), scoville.end());
        if(scoville[0]>=K)
        {
            return answer;
        }
        scoville[1] = scoville[0] + (scoville[1]*2);
        scoville.erase(scoville.begin());
        answer++;

    }
    return -1;
}
 */

