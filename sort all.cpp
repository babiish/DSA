#include <iostream>
using namespace std;


void view(int arr[],int size)
{
		for(int i=0;i<size;i++)
			cout<<arr[i];
}

int bubble(int arr[],int size)
{
	for(int i=0;i<size;i++)
		for(int j=0;j<size-1-i;j++)	
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
		return *arr;
}
int insertion(int arr[],int size)
{	
	for(int i=1;i<size;i++)
	{	
		int temp=arr[i];
	 	for(int j=i;j>0;j--)
		{
			if(arr[j-1]>arr[j])
				{
					arr[j]=arr[j-1];
					arr[j-1]=temp;
				}
		}
  }
		return *arr;
}

int selection(int arr[],int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		int min=i;
		for(int j=i;j<size;j++)
		{		
			if(arr[j]<arr[min])
	   			min=j;
		}
		
			if(i!=min)	
			{
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;		
			}	
	}
	return *arr;
}

int main()
{	//bubble
	int arr[]={5,3,2,1,3,7,2,8,9,4};
	int size=sizeof(arr)/4;
	int temp;
	
		view(arr,size);
		cout<<endl;
		
		bubble(arr,size);
		cout<<endl;
		cout<<"bubble: ";
		view(arr,size);	
		
		selection(arr,size);
		cout<<endl;
		cout<<"selection: ";
		view(arr,size);
		
		insertion(arr,size);
		cout<<endl;
		cout<<"selection: ";
		view(arr,size);
}
