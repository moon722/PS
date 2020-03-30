//
// Created by ������ on 2020-03-12.
//

//programmers level2 �踷���
// stack/queue

#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string arrangement) {
    int answer = 0;

    stack<int> stack1;
    int index = 0;

    while(index != arrangement.size())
    {
        if(arrangement[index] == '(')
        {
            if(arrangement[index+1] == ')')
            {
                answer += stack1.size();
                index+=2;
            }
            else{
                stack1.push(index);
                index++;
            }
        }
        else{
            stack1.pop();
            answer++;
            index++;
        }
    }
    return answer;
//    �丷��Ⱑ �Ʒ���, ���� ��ġ��x , ��ȣ()�� ������ �踷��ⳡ ( �����ʳ�)

}
int main()
{
    string str = "()(((()())(())()))(())";
    cout << solution(str);
}