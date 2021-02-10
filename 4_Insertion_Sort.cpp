#include<iostream>
using namespace std;

void InsertionSort(int arr[])
{
	int j=0;
	int key;
	for(int i =1;i<5;i++)
	{
		key = arr[i];
		j =i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

int main()
{
	int array[5];
	cout<<"Enter 5 Numbers in any order !"<<endl;
	for(int i =0;i<5;i++)
	{
		cin>>array[i];
	}
	
	cout<<"Number Before Sorting :"<<endl;
	for(int i =0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	InsertionSort(array);
	cout<<"Number After Sorting :"<<endl;
	for(int i =0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
	
	return 0;
	
}
