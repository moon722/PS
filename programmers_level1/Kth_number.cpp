//
// Created by ������ on 2020-03-09.
//

//���α׷��ӽ� level1 k��° ��

/* �� Ǯ��
#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> com : commands){
        vector<int> temp;

        for(int k = com[0]-1;k<com[1];k++){
            temp.push_back(array[k]);
        }
        sort(temp.begin(),temp.end());
        answer.push_back(temp[com[2]-1]);
    }

    return answer;
}
*/
//best

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;

    for(int i = 0; i < commands.size(); i++) {
        temp = array;
        sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
        answer.push_back(temp[commands[i][0] + commands[i][2]-2]);
    }

    return answer;
}
