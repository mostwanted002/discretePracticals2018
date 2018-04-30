#include<iostream>
using namespace std;

long fact(int n);
long fact(int n)
{
	if (n==0||n==1)
		return 1;
	else
		return n*fact(n-1);
}

int main()
{
	int n,r;
	cout<<"Enter the value of N ";
	cin>>n;
	cout<<"Enter the value of R ";
	cin>>r;
	cout<<"Permutation is : "
		<<(fact(n)/fact(n-r))<<endl;
	cout<<"Combination is : "
		<<(fact(n)/(fact(n-r)*fact(r)))<<endl;
	return 0;
}