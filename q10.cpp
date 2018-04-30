#include<iostream>
using namespace std;

void PCOMB(int size, int* digits);

int main()
{
	int size, counter=0;
	cout<<"Enter the number of digits you want to enter: ";
	cin>>size;
	int* digits[] = new int[size];
	cout<<"Enter the digits"<<endl;
	for (int i = 0; i<size; i++)
		cin>>digits[i];
	int* newa;
	for(int i = 0; i<size; i++)
	{
		for (int j = 0; j<size; j++)
		if (digits[i]==new[j])
			continue;
		else
		{
			(newa[i]==digits[i]);
			counter++;
		}
	}
	PCOMB(counter, new);
	
	
}

void PCOMB(int size, int* digits)
{
	for(int i = 0; i<size; i++)
	{
		while(