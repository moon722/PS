//
// Created by ������ on 2020-03-07.
//



//hash�� �ڷḦ �Է��� ������ �˻��ϱ� ���� ��ġ�� �����ϴ� ���(���� �˻��� ���� �ڷḥ �����ϴ� ���)
// example : �̸��� ù���ڸ� �������� �ּҸ� ���� ���
//�ڷᰡ ����Ǵ� ��ü����� : Hash Table ����(Bucket)


//#include <iostream>
//using namespace std;
//
//int hash(const char* str)
//{
//    int hash = 401;
//    int c;
//
//    while(*str != '\0')
//    {
//        hash = ((hash<<4)+(int)(*str)) % MAX_TABLE;
//        str++;
//    }
//    return hash % MAX_TABLE;
//}


//�������� ���Ѽ���

//sort ���
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i=0;i<completion.size();i++)
    {
        if(participant[i] != completion[i])
            return participant[i];
    }
    return participant[participant.size() - 1];
    //return answer;
}
//hash ���

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> strMap;
    for(auto elem : completion)
    {
        if(strMap.end() == strMap.find(elem))
            strMap.insert(make_pair(elem, 1));
        else
            strMap[elem]++;
     }

    for(auto elem : participant)
    {
        if(strMap.end() == strMap.find(elem))
        {
            answer = elem;
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
 */

