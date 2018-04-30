#include<iostream>
#include<stdio.h>
using namespace std;



class RELATION
{
	int matrx[3][3];
	int a = 3,b = 3;
	public:
	void input()
	{
		/*cout<<"Enter no. of elememts in Set A.: ";
		cin>>a;
		cout<<"Enter no. of elememts in Set B.: ";
		cin>>b;*/
		
		for (int i = 0; i<a ; i++)
			for (int j = 0; j<b; j++)
			{
				cout<<"Enter 0 or 1 for set A element "<<(i+1)<<" with set B element "<<(j+1)<<": ";
				cin>>matrx[i][j];
			}
	}
	int reflexive()
	{
		int f = 0;
		for (int i=0; i<a; i++)
			for (int j=0; j<b; j++)
		{
			if ((i==j)&&(matrx[i][j]==1))
				f++;
		}
		if (f == a)
		{
			cout<<"Relation is Reflexive."<<endl;
			return 1;
		}
		else
		{
			cout<<"Relation is Not Reflexive."<<endl;
			return 0;
		}
	}
	int sym()
	{
		int matrxt[3][3];
		int f = 0;
		for (int i = 0; i<b ; i++)
			for (int j = 0; j<a; j++)
			{
				matrxt[i][j] = matrx[j][i];
			}
		for (int i = 0; i<b ; i++)
			for (int j = 0; j<a; j++)
			{
				if (matrxt[i][j] == matrx[i][j])
					f++;
			}
		if (f == (a*b))
		{
			cout<<"Relations is Symmetric."<<endl;
			return 1;
		}
		else
		{
			cout<<"Relation is not symmetric."<<endl;
			return 0;
		}
	}
	int antisym()
	{
		int f = 0;
		for (int i = 0; i<a; i++)
			for (int j = 0; j<b; j++)
			{
				if (((matrx[i][j]==0)||(matrx[j][i]==0))&&(i!=j))
					f++;
			}
		if (f == ((a*b)-a))
		{
			cout<<"Relation is Anti-Symmetric."<<endl;
			return 1;
		}
		else
		{
			cout<<"Relation is not Anti-Symmetric."<<endl;
			return 0;
		}
	}
	int trans()
	{
		int f = 0;
		for (int i = 0; i<a; i++)
			for (int j = 0; j<b; j++)
				for (int k = 0; k<a ; k++)
				{
				if (matrx[i][j]==1&&matrx[j][k]==1&&matrx[i][k]==1)
					f++;
				}
		if (f > 1)
		{
			cout<<"Relation is Transitive"<<endl;
			return 1;
		}
		else
		{
			cout<<"Relation is Not Transitive"<<endl;
			return 0;
		}
	}
};

int main()
{
	int choice;
	RELATION ans;
	ans.input();
	do
	{
		cout<<"Choose one of the following."<<endl;
		cout<<"1. Check for Reflexive."<<endl;
		cout<<"2. Check for Symmetric."<<endl;
		cout<<"3. Check for Anti-Symmetric."<<endl;
		cout<<"4. Check for Transitive."<<endl;
		cout<<"0. Exit"<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1:
				{
					ans.reflexive();
					break;
				}
			case 2:
				{
					ans.sym();
					break;
				}
			case 3:
				{
					ans.antisym();
					break;
				}
			case 4:
				{
					ans.trans();
					break;
				}
		}
	}while (choice != 0);
	return 0;
}