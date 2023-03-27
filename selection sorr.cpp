#include <iostream>
using namespace std;

void selectionSort(int arr[])
{
    int i, j, min;
 
   
    for (i = 0; i < arr.size(); i++)
    {  
        
        min = i;
        for (j = i+1; j < n; j++)
       		if (arr[j] < arr[min])
       		    min = j;
 
     	 if(min!=i)
           {
           	 int temp = arr[i];
   			 arr[i]=arr[min];
  			  arr[min] =arr[i];
		   }
    }
} 
 

void printArray(int arr[])
{
    int i;
    for (i=0; i < arr.size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
   
    selectionSort(arr);
    cout << "Sorted array: "<<endl;
    printArray(arr);
    return 0;
}
