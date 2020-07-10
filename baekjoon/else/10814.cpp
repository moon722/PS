//
// 10814.cpp
// coding
//
// Created by mooninzoo on 2020-06-14.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
/*
 * ���̼� ����
 * stable_sort�� �̿��ϸ� marge sort�� ����ϱ⶧����
 * �Է��� ������� ���ĵȴ�.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool compare(pair<int,string> p1, pair<int,string> p2){
    return p1.first < p2.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,string>> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i].first >>v[i].second;
    }
    stable_sort(v.begin(),v.end(),compare);
    for(int i = 0; i <n; i++){
        cout << v[i].first <<' '<< v[i].second <<'\n';
    }
}
