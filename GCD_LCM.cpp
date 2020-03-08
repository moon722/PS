//
// Created by ������ on 2020-03-07.
//

#include <iostream>
using namespace std;

//�ִ�����1
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b) {
    if (a<b) swap(a,b);
    while (b != 0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
//�ִ�����2 : ���
int getGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return getGCD(b,a%b);
    }
}
//�ִ�����3 : ������
int getGCD2(int arr[5],int arr_length)
{
    if(arr_length < 2){
        return arr[0];
    }
    int result = getGCD(arr[0], arr[1]);
    for(int i = 2; i <arr_length; ++i)
    {
        result = getGCD(result, arr[i]);
    }
    return result;
}


int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

//long answer = w*h; �� ���ϰ� ���� ���� �� int���� ���� �� long������ ĳ�����Ͽ� ���� �־��ְ� �˴ϴ�.
//���ϱ� ���� �� �����Ͱ� int���� ������ ����� �����÷ο찡 �� �� �ֽ��ϴ�.

//*1������ �ڿ���* �� ����!!!!!!!


/* ������ �簢
#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
int gcd(int a,int b)
{
    if(b > a) swap(a,b);
    while( b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

long long solution(int w,int h)
{
	long long answer = 1;
    answer = (long)w*h - ((long)w+h-gcd(w,h));
	return answer;
}
 */