//
// Created by ������ on 2020-03-10.
//

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> WM = {"��","��"};
    for(int i = 2 ; i < n+2; i ++)
    {
        answer+=WM[i%2];
    }
    cout << answer;
    return answer;
}
int main()
{
    int n = 5;
    string s = solution(5);

}