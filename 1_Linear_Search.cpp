#include<iostream>
using namespace std;

void LinearSearch(int a[],int n)
{
   int temp =0;
   for(int i=0;i<5;i++)
   {
   	  if(a[i]==n)
   	  {
   	  	temp =1;
   	  	cout<<"Element Found at position : "<<i+1<<endl;
   	  	break;
		 }
		 
   	  
   }
   
   if(temp==0)
   {
   	printf("Element Not Found !");
	   }	
}

int main()
{
	int arr[5];
	int ele;
	cout<<"Enter the 5 elements for an Array " <<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to search in the array "<<endl;
	cin>>ele;
	LinearSearch(arr,ele);
	
	return 0;
}
