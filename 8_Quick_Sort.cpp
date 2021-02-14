#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
	// taking the last element as the pivot element
	
	int pivot = arr[e];
	int pindex = s;
	for(int i = s ; i<=e-1;i++)
	{
		if(arr[i]<=pivot)
		{
			int temp = arr[i];
			arr[i] = arr[pindex];
			arr[pindex] = temp;
			pindex++;
		}
		
	}
	int temp2 = arr[e];
	arr[e]=arr[pindex];
	arr[pindex] = temp2;
	
	return pindex;
}

void QuickSort(int arr[],int s , int e)
{
	if(s<e)
	{
		int p = partition(arr,s,e);
		QuickSort(arr,s,(p-1));
		QuickSort(arr,(p+1),e);
	}
}



int main()
{
	int arr[5];
	cout<<"Enter 5 Elements for the array :"<<endl;
	for(int i = 0; i< 5; i++)
	{
		cin>>arr[i];
	}
	
	cout<<endl;
	cout<<"Elements before Sorting :"<<endl;
	for(int i =0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	QuickSort(arr,0,4);
	
	cout<<"Elements After Sorting :"<<endl;
	for(int i =0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
}
