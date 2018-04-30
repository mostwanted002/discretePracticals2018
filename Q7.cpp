#include<iostream>
#include<stdio.h>

using namespace std;

int  b_search(int x, int* arr, int l, int r)
{
	int mid = l + (r - l)/2;
	if (r>=l)
	{
		if (x == arr[mid])
			return mid;
		if (x < arr[mid])
			return b_search(x, arr, l, mid-1);
		if (x > arr[mid])
			return b_search(x, arr, mid+1, r);
	}
	else return 0;
}

int main()
{
	int x,num;
	int* arr;
	cout<<"Enter the number of elements you wish to enter: ";
	cin>>num;
	arr = new int [num];
	for (int i = 0; i<num; i++)
	{
		cout<<"Enter the element: ";
		cin>>arr[i];
	}
	cout<<endl
		<<"Enter the Element you want to search for: ";
	cin>>x;
	if (b_search(x, arr, 0, (num-1))==0)
		cout<<"ELEMENT IS NOT PRESENT!"<<endl;
	else
		cout<<"ELEMENT IS PRESENT AT INDEX LOCATION "
			<<b_search(x, arr, 0, (num-1))<<endl;
	return 0;
}
