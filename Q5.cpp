#include<iostream>
#include<stdio.h>

using namespace std;

double fib(int a)
{
	if (a==1||a==0)
		return 1;
	else
		return fib(a-1)+fib(a-2);
}

int main()
{
	int n;
	cout<<"Enter the value for n: ";
	cin>>n;
	cout<<fib(n)<<endl;
return 0;
}
