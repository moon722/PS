//
// 2751.cpp
// coding
//
// Created by mooninzoo on 2020-06-08.
// Copyright (c) 2020 mooninzoo. All rights reserved
//

/*
 *  �� �����ϱ� 2
 *  �ð��ʰ�
 *  �ð� ���⵵�� nlogn�� �˰��� ����ؾ���
 *
 *  printf, scanf ���� �ð��� �پ�� �׳� ����ص���
 */
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    int* arr = new int [n];
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i = 0; i<n; i++){
        printf("%d\n",arr[i]);
    }
}
