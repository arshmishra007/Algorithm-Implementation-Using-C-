#include<iostream>
using namespace std;

void BubbleSort(int arr[])
{
	for(int i=0;i<5;i++)
	{
		int flag =false;
		for(int j=0;j<5-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[5];
	cout<<"Enter 5 Elements :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Elements Before Sorting :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	BubbleSort(arr);
	cout<<"Elements After Sorting :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
	
	
}
