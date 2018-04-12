#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	double d, l, v1, v2;
	cin>>d>>l>>v1>>v2;
	double time;
	double x;
	x=l-d;
	time=x/(v1+v2);
	printf("%.8lf", time);
}