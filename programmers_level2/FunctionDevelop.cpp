//
// Created by ������ on 2020-03-11.
//

//programmers level2 ��ɰ���

//best solution  : ���
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int day;
    int max_day = 0;
    for (int i = 0; i < progresses.size(); ++i)
    {
        day = (99 - progresses[i]) / speeds[i] + 1;

        if (answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back();

        if (max_day < day)
            max_day = day;
    }

    return answer;
}
//my solution(����) -> �ݺ��� �ʹ� ������
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    for(int i = 0; i <progresses.size(); i++)
    {
        progresses[i] = (100-progresses[i])/speeds[i];
        cout << progresses[i] <<endl;
    }
    int max = progresses[0];
    int distribution = 1;
    for(int i = 1; i < progresses.size(); i++)
    {
        if(progresses[i] > max)
        {
            max = progresses[i];
            answer.push_back(distribution);
            distribution = 1;
            if(i == progresses.size()-1){
                answer.push_back(distribution);
                break;
            }
        }
        else{
            distribution++;
            if(i == progresses.size()-1){
                answer.push_back(distribution);
                break;
            }
        }
    }

    return answer;
}