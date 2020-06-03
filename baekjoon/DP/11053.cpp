//
// 11053.cpp
// PS
//
// Created by mooninzoo on 2020-05-30.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 * ���� �� �����ϴ� �κ� ����
 * �ַ�� Ȯ��
 * ������ �ڽŰ��� ������ ������ ���ƺ��� ���� �ִ��� ������ �ڽ��� �ִ� ���̸� ���Ѵ�
 * �� �κи��� ������ ������ �迭�� �˻��ؾ��Ѵ�
 * �׸����� : https://wootool.tistory.com/96
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[1000];
    int arr[1000];
    int max = 0;
    for(int i = 1;i<=n; i++) cin>>arr[i];
    dp[0] = 0;
    for(int i = 1; i<= n; i++){
        int min = 0;
        for(int j = 0; j < i; j++){
            if(arr[i]>arr[j]){
                if(min< dp[j])
                    min = dp[j];
            }
        }
        dp[i] = min+1;
        if(max <dp[i])
            max = dp[i];
    }
    cout << max << endl;
}