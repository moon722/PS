//
// 1463.cpp
// coding
//
// Created by mooninzoo on 2020-05-22.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

#include <iostream>
#include <algorithm>
using namespace std;
//DP����(retry)
//bottom-up(�ݺ������)
//��ȭ�� : D[N�� 1�� ����� �ּ� Ƚ��] = D[N-1�� 1�� ����� �ּ� Ƚ��] +1 or D[N/2�� 1�� ����� �ּ� Ƚ��]+1 or D[N/3�� �ּҷ� ����� �ּ� Ƚ��]+1
//dp[i] = dp[i-1]+1;
//if(i%2==0) dp[i] = MIN(dp[i], dp[i/2]+1);
//if(i%3==0) dp[i] = MIN(dp[i], dp[i/3]+1);
int main(){
    int n, i ,dp[1000001];
    cin >> n;
    dp[0] = dp[1] - 1;
    for(i = 2; i <=n; i++){
        dp[i] = dp[i-1]+1;
        if(i%2 == 0) dp[i] = min(dp[i], dp[i/2]+1);
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3]+1);
    }
    cout << dp[n];
}


// ���� Ǭ ��� - ���� ��θ� ����������
/*
int main(){
    int X;
    int count = 0;
    cin >> X;
    while(1){
        if(X ==1)
            break;
        if(X%3)
        if(X%3 == 0)
            X = X/3;
        else if(X%2 == 0)
            X = X/2;
        else
            X -=1;
        count++;
    }
    cout << count;
}
 */