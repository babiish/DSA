#include <iostream>
using namespace std;

struct node
{
	int data;
	node *prev;
	node *next;
};
	node *head=NULL;
	node *tail=NULL;

void insert_end(int x)
{
	node* temp=new node();
	
	temp->data=x;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(head==NULL)
	{
		head=tail=temp;
	}
	else
	{
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
		cout<<"pushed "<<x<<endl;
	}
	
	
}
void pop()
{
	
	if(head==NULL)
	{
		cout<<"no data";
	}
	else
	{	
		node *temp=head;
		
		head=head->next;
		head->prev=NULL;
		delete temp;			
	}
}

void display()
{	
	node *temp=head;
		
		if(temp==NULL)
			{
			cout<<"underflow";
			}
		
		cout<<"elements: ";
		while(temp!=NULL)
		{			
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"last: " <<temp->data<<endl;
}

void peak()
{
	if(head==NULL)
	 	cout<<"underflow";
	else
		cout<<"1st element: "<<head->data;
}

int main()
{
	insert_end(1);
	insert_end(2);
	insert_end(3);
	insert_end(4);
	pop();		
	display();
	
	cout<<endl;
	peak();
}

