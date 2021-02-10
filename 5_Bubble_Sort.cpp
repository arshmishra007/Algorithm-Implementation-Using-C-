#include<iostream>
using namespace std;

void BubbleSort(int arr[])
{
	for(int i =0;i<10;i++)
	{
		for(int j=0;j<10-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[10];
	cout<<"Enter 10 Elements in any order!"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		
	}
	cout<<endl;
	cout<<"Elements before Sorting : "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
	BubbleSort(arr);
	
	cout<<"Elements After Sorting : "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
	
	
	return 0;
	
	
}
