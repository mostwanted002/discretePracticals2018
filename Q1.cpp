#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int card(int* A);
bool isMember(int a, int* A, int s);
void powerset(int* A, int a);

int main()
{
	int* A = NULL;
	int s;
	cout<<"Enter the no. of elements for the SET: "<<endl;
	cin>>s;
	A = new int[s];
	int i = 0,e;
	while(i<s)
	{
		cout<<"Enter the element: ";
		cin>>e;
		A[i] = e;
		i++;
	}
	int c;
	do
	{
		cout<<"Choose from the options below:"<<endl;
		cout<<"1. Check if an element is member of the SET or not."<<endl;
		cout<<"2. Check the cardinality of the SET."<<endl;
		cout<<"3. List all the elements of powerset of the SET."<<endl;
		cout<<"0. Exit"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
				{
					int a;
					cout<<"Enter the element you wish to check for: ";
					cin>>a;
					if(isMember(a,A, card(A)) == true)
						cout<<"Element EXISTS"<<endl;
					else cout<<"Element DOESN'T EXIST"<<endl;
					break;
					}
			case 2:
				{
					cout<<"The cardinality of the SET is "<<card(A)<<endl;
					break;
				}
			case 3:
				{
					powerset(A, card(A));
					break;
				}
		}
	}while (c != 0);
}

int card(int* A)
{
	int c = 0;
	int i = 0;
	do
	{
		if (A[i] == '\0')
			break;
		else
		{c++; i++;}
	}while(c>=0);
	return c;
}

bool isMember(int a, int* A, int s)
{
	int f=0;
	for (int i = 0; i<s ; i++)
	{
		if (A[i] == a)
		{f=1; break;}
	}
	if (f == 1)
		return true;
	else return false;
}

void powerset(int* A, int a)
{
	for (int i=0 ; i <a ; i++)
	{
		cout<<"{"<<A[i]<<"}"<<endl;
		for (int j = 0 ; j<(a-1); j++)
		{
			if (i==j)
				continue;
			else
			{
				cout<<"{"<<A[i]<<","<<A[j]<<"}"<<endl;
			}
		}
	}
	for (int i = 0; i <(a-1) ; i++)
	{
		cout<<"{"<<A[i];
		for (int j = (i+1); j<a; j++)
		{
			cout<<","<<A[j];
		}
		cout<<"}"<<endl;
	}
}