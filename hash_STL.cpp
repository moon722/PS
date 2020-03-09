//
// Created by ������ on 2020-03-09.
//

//unordered_map(hash_map)
//find�� count�� existüũ
//����! map[5];�� ���� �͸����ε� m[5]�� �����ȴ�
//�̹� �ִ�Ű�� insert�� �ϸ� ������ �ʴ´� : �ذ� m[key]���

/*
#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> hash_map;
int main()
{
    hash_map.insert(make_pair("umbum",1234)); // hash_map["umbum"] = 1234 �� ����
    if(hash_map.count("umbum"))
    {
        cout << hash_map["umbum"]<< endl;
    }
    auto item = hash_map.find("umbum");
    if(item != hash_map.end())
    {
        cout << item->first << ' ' << item->second << endl;
    }


}
*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    unordered_map<string, int> strMap;
    for(auto elem : completion)
    {
        if(strMap.end() == strMap.find(elem))
            //.end()�޼ҵ� �ڷ��� ������ ���� �������� ��iterator�� �޸� ��ȯ
            //.find() �޼ҵ� : iterator ��ȯ - ���� ã�� ���� ��� �� iterator ��ȯ
            // ��� : map�� key���� ������ ������ ���� ǥ����
            strMap.insert(make_pair(elem,1));
        else
            strMap[elem]++;
    }
    for(auto elem : participant)
    {
        if(strMap.end() == strMap.find(elem))
        {
            answer= elem;
            break;
        }
        else
        {
            strMap[elem]--;
            if(strMap[elem] < 0)
            {
                answer = elem;
                break;
            }
        }

    }
    return answer;
}
