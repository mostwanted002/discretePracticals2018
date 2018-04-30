#include<iostream>
using namespace std;

class TABLE
{
	public:
	TABLE()
	{
		for (int i =0 ; i<4 ; i++)
		{
			inpx[i]=0;
			inpy[i]=0;
		}
	}
	int inpx[4], inpy[4];
	
	void input()
	{
		cout<<"Enter the truth values."<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<"X: ";
			cin>>inpx[i];
			cout<<"Y: ";
			cin>>inpy[i];
		}
	}
	void Conjuction()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if ((inpx[i] == 1) && (inpy[i]==1))
				cout<<"1"<<endl;
			else
				cout<<"0"<<endl;
		}
	}
	void Disjunction()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if ((inpx[i] == 1) || (inpy[i]==1))
				cout<<"1"<<endl;
			else
				cout<<"0"<<endl;
		}
	}
	void XOR()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if (((inpx[i] == 1) && (inpy[i]==0))||((inpx[i]==0)&&(inpy[i]==1)))
				cout<<"1"<<endl;
			else
				cout<<"0"<<endl;
		}
	}
	void Conditional()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if ((inpx[i] == 1) && (inpy[i]==0))
				cout<<"0"<<endl;
			else
				cout<<"1"<<endl;
		}
	}
	void BiConditional()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if (((inpx[i] == 1) && (inpy[i]==0))||((inpx[i]==0)&&(inpy[i]==1)))
				cout<<"0"<<endl;
			else
				cout<<"1"<<endl;
		}
	}
	void XNOR()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if (((inpx[i] == 1) && (inpy[i]==1))||((inpx[i]==0)&&(inpy[i]==0)))
				cout<<"1"<<endl;
			else
				cout<<"0"<<endl;
		}
	}
	void Negation()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if (inpx[i] == 1)
				cout<<"0"<<endl;
			else
				cout<<"1"<<endl;
		}
	}
	void NAND()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if ((inpx[i] == 1) && (inpy[i]==1))
				cout<<"0"<<endl;
			else
				cout<<"1"<<endl;
		}
	}
	void NOR()
	{
		cout<<" X "<<" "<<" Y "<<" "<<" O "<<endl;
		for(int i = 0; i < 4; i++)
		{
			cout<<" "<<inpx[i]<<"   "<<inpy[i]<<"   ";
			if (inpx[i]==1||inpy[i]==1)
				cout<<"0"<<endl;
			else
				cout<<"1"<<endl;
		}
	}
};

int main()
{
	TABLE ans;
	int c;
	cout<<"Enter the truth values."<<endl;
	ans.input();
	do
	{
		cout<<"ENTER THE NUMBER OF OPERATION."<<endl;
		cout<<"1. CONJUCTION"<<endl;
		cout<<"2. DISJUNCTION"<<endl;
		cout<<"3. XOR"<<endl;
		cout<<"4. CONDITIONAL"<<endl;
		cout<<"5. BI-CONDITIONAL"<<endl;
		cout<<"6. XNOR"<<endl;
		cout<<"7. NEGATION"<<endl;
		cout<<"8. NAND"<<endl;
		cout<<"9. NOR"<<endl;
		cout<<"69. RE-ENTER"<<endl;
		cout<<"0. EXIT"<<endl;
		cin>>c;
		switch (c)
		{
			case 1:
				{
					ans.Conjuction();
					break;
		}
			case 2:
				{
			ans.Disjunction();
			break;
		}
			case 3:
				{
			ans.XOR();
			break;
		}
			case 4:
				{
			ans.Conditional();
			break;
		}
			case 5:
				{
			ans.BiConditional();
			break;
		}
			case 6:
				{
			ans.XNOR();
			break;
		}
			case 7:
				{
			ans.Negation();
			break;
		}
			case 8:
				{
			ans.NAND();
			break;
		}
			case 9:
				{
			ans.NOR();
			break;
		}
			case 69:
				{
			ans.input();
		}
	}
	}while (c!=0);
	return 0;
}