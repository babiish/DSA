#include <iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=11;//look for n
	int size= sizeof(arr)/4;
	
	int l,r,m;
		 l=0,r=size-1;
	do
	{

     m=(l+r)/2;
		
	if(arr[m]==n)
	{
		cout<<"found at: "<<m;	
		return 0;
	}	
	else if(arr[m]>n)
		r=m-1;
	else 
		l=m+1;	
		
	}while(l<=r);
	
	cout<<"not found";
}
