//
// Created by ������ on 2020-03-10.
//

//programmers level1 ���ڿ� �� p�� y�� ����

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_num = 0, y_num = 0;
    for(auto elem : s)
    {
        if(elem == 'p' || elem == 'P')
            p_num++;
        if(elem == 'y' || elem == 'Y')
            y_num++;
    }
    return p_num == y_num;
}
