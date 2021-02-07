#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right,int x)
{
	while(left<=right)
	{
		int mid = left + (right-left)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
		else if(arr[mid]<x)
		{
			left = mid+1;
		}
		else
		{
			right =mid-1;
		}
	}
	return -1;
}

int main()
{
	int arr[10];
	int num;
	int output;
	
	cout<<"Enter 10 digits in the ascending order :"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to search :"<<endl;
	cin>>num;
	
	output = binarysearch(arr,0,9,num);
	
	if(output == -1)
	{
		cout<<"No match is found!"<<endl;
	}
	else
	{
		cout<<"match found at index pos :"<<(output+1)<<endl;
	}
	return 0;
}
