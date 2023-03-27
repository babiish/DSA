#include <iostream>
using namespace std;

int main()
{
	int arr[]={5,4,2,3,1};
	int n=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			cout<<"found at:"<<i;
			return 0;
		}
	}
	cout<<"not found";
	
}
