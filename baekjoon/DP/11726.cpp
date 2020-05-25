//
// 11726.cpp
// coding
//
// Created by mooninzoo on 2020-05-23.
// Copyright (c) 2020 mooninzoo. All rights reserved
//
#include <iostream>
#include <vector>
using namespace std;
//DP(retry)
//���� Ÿ���� 1�� ���η� ���� ���, �տ� Ÿ���� 2�� ���η� ���� ��츦 ���ϸ� �ȴ�
//����� ���� �غ��� ��ȭ�� �����ϱ�

int dp(int* d, int n){
    d[1] = 1;
    d[2] = 2;
    for(int i = 3; i <=n ; i++) d[i] = (d[i-1]+d[i-2]) %10007;
    //�����Ҷ����� 10007�� ���� �������� ����
    return d[n];
}
int main(){
    int n;
    cin >> n;
    int d[n+1];
    cout << dp(d,n);

    return 0;
}


/*
 * �׳� ������ �ڵ����� ������ 60������ �ȴ�..��
 * ���ڰ� �ʹ� Ŀ���� �ȵȴ�
 *
//1�� 2�� ������ ���� n�� �迭 �� ����
//���� ���� �ִ� ���� = n�� �� ���� ���� ���� p��, q���� ������ n���� ��� ���Ͽ� �Ϸķ� �迭�ϴ� ������ ��
long long int factorial(int num1, int num2, int num3){
    vector<int> vec1, vec2, vec3;
    //num3�� 0�ΰ�� erase�� �����⿡�� �������Ƿ� 1�� �ٲ��ش�
    if(num3==0)
        num3=1;
    //num���� ���� �����
    for(int i = 1 ; i <= num1; i++){
        vec1.push_back(i);
        if(i<=num2) vec2.push_back(i);
        if(i<=num3) vec3.push_back(i);
    }
    //num���Ϳ��� ���μ��� �ߺ��� �� ���ֱ�
    vector<int>::iterator iter_a;
    vector<int>::iterator iter_b;
    vector<int>::iterator iter_a2;
    for (iter_a = vec1.begin(); iter_a != vec1.end();) {
        iter_a2 = iter_a;
        for (iter_b = vec2.begin(); iter_b != vec2.end();) {
            if (*iter_a == *iter_b) {
                iter_b = vec2.erase(iter_b); //�ߺ� ����
                iter_a = vec1.erase(iter_a);
            } else
                iter_b++;
        }
        if(vec1.size() ==0)
            break;
        if (iter_a == iter_a2)
            iter_a++;
    }

    for (iter_a = vec1.begin(); iter_a != vec1.end();) {
        iter_a2 = iter_a;
        for (iter_b = vec3.begin(); iter_b != vec3.end();) {
            if (*iter_a == *iter_b) {
                iter_b = vec3.erase(iter_b); //�ߺ� ����
                iter_a = vec1.erase(iter_a);
            } else
                iter_b++;
        }
        if (iter_a == iter_a2)
            iter_a++;
    }
    //���丮�� ���
    long long int result = 1;
    for(auto elem : vec1)
        result *= elem;
    for(auto elem : vec2)
        result /= elem;
    for(auto elem : vec3) {
        result /= elem;
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    int div_num = n/2;
    long long int count = 1;
    for(int i = 1; i <= div_num; i++){
        int p = n-i*2;
        int num = i+p;
        count += factorial(num,i,p);
        cout << count <<endl;
    }
    cout << count%10007;
}
 */