#include<iostream>
#include<stdio.h>
using namespace std;
class SET
{
	int e, size1, size2;
	int* A;
	int* B;
	
	public:
	void input()
	{
		cout<<"Enter the number of elements in each set: ";
		cin>>size1>>size2;
		cout<<"Enter the elements of the two sets:"<<endl
			<<"Set A:";
		A = new int[size1];
		for (int i = 0; i<size1; i++)
		{
			cin>>e;
			A[i] = e;
		}
		cout<<"Set B:"<<endl;
		B = new int[size2];
		for (int i = 0; i<size2; i++)
		{
			cin>>e;
			B[i] = e;
		}
	}
	void subset()
	{
		int flag = 0;
		if (size1 < size2)
		{
			for (int i = 0; i<size1 ; i++)
			{
				for(int j = 0; j<size2; j++)
				{
					if (A[i] == B[j])
					flag++;
				}
			}
			if (flag>0)
				cout<<"SET A is subset of SET B"<<endl;
		}
		else if (size1 > size2)
		{
			for (int i = 0; i<size2 ; i++)
			{
				for(int j = 0; j<size1; j++)
				{
					if (B[i] == A[j])
					flag++;
				}
			}
			if (flag>0)
				cout<<"SET B is subset of SET A"<<endl;
		}
		else
		{
			for (int i = 0; i<size1 ; i++)
			{
				for(int j = 0; j<size2; j++)
				{
					if (A[i] == B[j])
					flag++;
				}
			}
			if (flag>0)
				cout<<"SET A is equal to SET B"<<endl;
		}
	}
	void Union()
	{
		cout<<"{ ";
		for (int i = 0; i<size1; i++)
			cout<<A[i]<<", ";
		int flag = 0;
		for (int j = 0; j<size2; j++)
		{
			flag=0;
			for (int k = 0; k < size1; k++)
			{
				if (B[j]==A[k])
					flag++;
			}
			if (flag > 0)
				continue;
			else cout<<B[j]<<", ";
		}
		cout<<"}"<<endl;
	}
	void Inter()
	{
		cout<<"{ ";
		if (size1 < size2)
		{
			for (int i = 0; i<size1 ; i++)
			{
				for(int j = 0; j<size2; j++)
				{
					if (A[i] == B[j])
					cout<<A[i]<<", ";
				}
			}
		}
		else if (size2 < size1)
		{
			for (int i = 0; i<size2 ; i++)
			{
				for(int j = 0; j<size1; j++)
				{
					if (B[i] == A[j])
					cout<<B[i]<<", ";
				}
			}
		}
		else 
		{
			for (int i = 0; i<size1 ; i++)
			{
				for(int j = 0; j<size2; j++)
				{
					if (B[i] == A[j])
					cout<<B[i]<<", ";
				}
			}
		}
		cout<<" }"<<endl;
	}
	void Cart()
	{
		cout<<"{ ";
		for (int i = 0; i<size1 ; i++)
		{
			cout<<" ";
			for (int j = 0; j<size2; j++)
				cout<<"("<<A[i]<<","<<B[j]<<"),";
		}
		cout<<" }"<<endl;
	}
};

int main()
{
	SET a;
	a.input();
	cout<<"Subset: "<<endl;
	a.subset();
	cout<<"UNION: "<<endl;
	a.Union();
	cout<<"INTERSECTION: "<<endl;
	a.Inter();
	cout<<"CARTESIAN PRODUCT: "<<endl;
	a.Cart();
	return 0;
}