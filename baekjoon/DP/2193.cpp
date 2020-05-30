//
// 2193.cpp
// coding
//
// Created by mooninzoo on 2020-05-27.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 *    0 1
 *  1 0 1
 *  2 1 0
 *  3 1 1 100 101
 *  4 2 1 1000 1001 1010
 *  5 3 2 10000 10001 10010 10100 10101
 *  6 5 3
 */

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long int dp[90][2] = {0, }; //�ʱ�ȭ �Ű澲��
    dp[0][0] = 0;
    dp[0][1] = 1;
    long int result = 1; //�־��� �������� �޸� ���� �Ѵ��� Ȯ��
    for(int i = 1; i < n; i++){
        for(int j = 0; j < 2;j++){
            dp[i][0] += dp[i-1][j];
        }
        dp[i][1] = dp[i-1][0];
        result = dp[i][0]+dp[i][1];
    }
    cout << result;
}