//
// 9461.cpp
// coding
//
// Created by mooninzoo on 2020-06-05.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * �ĵ��� ����
 * �׽�Ʈ ���̽����� long int Ȯ���Ұ�
 */

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    long int dp[100]= {1,1,1,2,2, };
    for(int j = 5 ;j < 100; j++){
        dp[j] = dp[j-5] + dp[j-1];
    }
    for(int i = 0; i < T; i ++){
        int n;
        cin >> n;
        cout << dp[n-1] << endl;
    }
}