#include<iostream>
using namespace std;


void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}


void swapAlternate(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1<size)
		{
			int temp = arr[i+1];
			arr[i+1]=arr[i];
			arr[i]= temp;
		}
	}
}


int main()
{
	int even[6]={1,2,3,4,5,6};
	int odd[7]={1,2,3,4,5,6,7};
	
	swapAlternate(even,6);
	
	printArray(even,6);
	
	cout<<endl;
	
	swapAlternate(odd,7);
	
	printArray(odd,7);
}
