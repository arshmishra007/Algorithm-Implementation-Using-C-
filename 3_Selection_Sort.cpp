#include<iostream>
using namespace std;

void asc_selectionsort(int arr[])
{
	for(int i =0;i<4;i++)
	{//used for monitoring the position
		int min =i;
		//used for comparison
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]<arr[min])
			{
				min =j;
			}
		}
		//here we will perform swapping
		if(min!=i)
		{
			int temp = arr[min];//arr[min] contins the least element
			arr[min] = arr[i];//arr[i] containes the element present at that position which needs to be sorted
			arr[i] = temp;
		}
	}
}

void dsc_selectionsort(int arr[])
{
	for(int i =0;i<4;i++)
	{//used for monitoring the position
		int max =i;
		//used for comparison
		for(int j=i+1;j<5;j++)
		{
			if(arr[j]>arr[max])
			{
				max =j;
			}
		}
		//here we will perform swapping
		if(max!=i)
		{
			int temp = arr[max];//arr[min] contins the least element
			arr[max] = arr[i];//arr[i] containes the element present at that position which needs to be sorted
			arr[i] = temp;
		}
	}
}

int main()
{
	int arr[5],i;
	cout<<"Enter 5 Elements : "<<endl;
	cout<<"_._.__._.__._.__._._"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Performing sorting in Ascending order"<<endl;
	asc_selectionsort(arr);
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Performing sorting in Descending Order"<<endl;
	dsc_selectionsort(arr);
	
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


