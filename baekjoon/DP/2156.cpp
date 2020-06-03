//
// 2156.cpp
// coding
//
// Created by mooninzoo on 2020-05-28.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * ������ �ý�retry
 * dp[n]�� n������ �ִ�� ���� �� �ִ� �������� ���� �ִ´�
 * 11 10 20 59 1 15
 * 59�϶��� 11+20+59�� �ִ�
 * 20 ������ �ִ��� 11+10+20
 *
 * �ַ�Ǻ���
 * dp[n] = dp[i-2] + arr[i] ->i��° ������ + i+2��°������ �ִ�
 * dp[n] = dp[i-3] + arr[i-1] + arr[i] ->i��° ������ + i-1��° ������ + i-3������ �ִ�
 * max(dp[n],dp[n-1)) ->2�� ���� �ȸ��� ��찡 ����
 * ���� �ΰ����� ��������
 */
/*
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10003] = {0, };
    int dp[10003] = {0, };
    for(int i= 3; i < n+3; i ++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 3; i < n+3; i++) {
        if(i==6) {
            dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i], dp[i - 1], dp[i - 4] + arr[i-2] + arr[i-1] + arr[i]});
        }
        else {
            dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i],dp[i-1]});
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
 */
/* �̰� �¾��� ������ 1 2 3 4 �� ��� Ʋ��
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[10003] = {0, };
    int dp[10003] = {0, };
    for(int i= 3; i < n+3; i ++) {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 3; i < n+3; i++) {
        dp[i] = max({dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i],dp[i-1]});
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
*/