#include <iostream>

using namespace std;
int f=-1,  r=-1 , q[100], size=100;
    //front //rare //n=size
	
void enqueue(int val)
	{
	
	if (r == size - 1)
	cout <<"Queue Overflow";
	
	else
	{
		if (f == - 1)//if no elemnt
			f++;
		
		r++;
		q[r] = val;
	}
	cout<<"pushed: "<<val<<endl;
}

void dequeue()
{		
 	//no data  or all deleted by f++
	if (f == - 1)
	{
	cout << "Queue Underflow ";
	return ;
	}
	
	else
	{
	cout << "Element deleted is : "<< q[f] << endl;
	q[f]=NULL;
	f++;
	}

}

void display()
{
	if (f == - 1)
	cout << "Queue is empty" << endl;
	else
	{
	  cout << "Queue elements are : ";
		for (int i = 0; i <= r; i++)
			{
				cout << q[i] << " ";
			}
	cout << endl;
	}
}

int main()
{
		enqueue(1);
		enqueue(2);
		display();
		
		dequeue();			
		display();
}
