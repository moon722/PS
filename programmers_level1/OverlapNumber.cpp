//
// Created by ������ on 2020-03-09.
//

//���α׷��ӽ� level1 ���� ���ڴ� �Ⱦ�

//my solution

#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int cur = -1;
    for(auto elem : arr)
    {
        if(elem != cur)
        {
            answer.push_back(elem);
        }
        cur = elem;
    }
    return answer;
}