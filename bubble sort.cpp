#include <iostream>
using namespace std;

int size;
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
   	 	{
		    for (j = 0 ; j < n-1-i ; j++)
            
			if (arr[j] > arr[j + 1])
                {
                  int temp = arr[j];
   			      arr[j]=arr[j+1];
  			      arr[j+1] =temp;
				}
		}
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
    
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
	    arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)     
        cout << arr[i] << " ";
}
 
 
int main()
{ 
	cout<<"enter size of your array: ";
	cin>>size;
		
    int arr[size];
    cout<<"enter your numbers";
	for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
	}
   cout<<"1.bubble sort"<<endl;
   cout<<"2.insertion sort"<<endl;
   int c;
	
    cout<<"enter your choice of sorting: ";
	cin>>c;
	
switch(c)
{
  case 1:  
    bubbleSort(arr, size);
    printf("Sorted array with bubble sort: \n");
    printArray(arr, size);
    break;
  case 2:
  	insertionSort(arr, size);
    printf("Sorted array with insertion sort: \n");
    printArray(arr, size);
    break;
  default:
  	cout<<"invalid input";
}

}
