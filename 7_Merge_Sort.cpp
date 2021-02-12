#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int i = l;
	int j = m+1;
	int k = l;
	int temp[10];
	
	while(i<=m && j<=r)
	{
	 	if(arr[i]<=arr[j])
	 	{
	 		temp[k]=arr[i];
	 		i++,k++;
		 }
		 else
		 {
		 	temp[k]=arr[j];
		 	j++,k++;
		 }
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++,k++;
	}
	
	while(j<=r)
	{
	 temp[k] = arr[j];
	 j++,k++;	
	}
	
	for(int p=l;p<=r;p++)
	{
		arr[p]=temp[p];
	}
}	


void mergeSort(int arr[],int l,int r)
	{
		if(l<r)
		{
			int m =(l+r)/2;
			mergeSort(arr,l,m);
			mergeSort(arr,m+1,r);
			merge(arr,l,m,r);
		}
	}
	

int main()
{
	int arr[10];
	cout<<"Enter 10 Elements in any order :"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements before Sorting :"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    mergeSort(arr,0,9);
	cout<<"Elements After Sorting :"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
return 0;	
}
