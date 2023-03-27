#include <iostream>
using namespace std;
 		//merge sort

int merge(int arr[],int l,int m,int r)  // called atleast 4 times
{
	int i=l,j=m+1,k=l; // left/right/temp first index

	int size=(r-l)+1;
	int temp[size];	 //temp
	
	while(i<=m && j<=r)
	{
		if(arr[i]<arr[j])
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
		temp[k]=arr[i]; //if left elements are reamining
		i++,k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];//if right elements are remaining
		j++,k++;
	}
		
	for(int i=l;i<=r;i++)  //left and right  no 0 and 5 b/c its called every time for left then right then merge
	{
		arr[i]=temp[i];
	}
	
}	
	 
	 	
int mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);		
	}

}
 		
int main()
{
	int arr[]={5,4,3,6,7};
	int size= sizeof(arr)/4;
	
	cout<<"before sort: ";
	for (int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	
	//merge sort
	 mergesort(arr,0 ,size-1);
	 	 
	cout<<"\nafter sort: ";
	for (int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	return 0;
}
