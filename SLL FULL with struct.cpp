#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
node *head=NULL;

void pushE(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	
	if(head==NULL)
		head=temp;
	else
		{
			node *temp2=head;
			while(temp2->next!=NULL)						
			{
				temp2=temp2->next;
			}
			temp2->next=temp;
		}
}

void pushF(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	
	if(head==NULL)
		head=temp;
	else
		temp->next=head;
	head=temp;	
}

void pushM(int pos,int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	
	if(head==NULL)
	{
		cout<<"no data";
		return;
	}
	
	node *temp2=head;
	
	for(int i=1;i<pos-1; i++) //postion finding
		temp2=temp2->next;

	temp->next=temp2->next;  //point next node
	temp2->next=temp;		//connect prev to new node
}
void delF()
{
	if(head==NULL)
		cout<<"empty";
	else
	{
		node *temp=head;
		head=head->next;
		delete temp;
	}
}

void delE()
{
	if(head==NULL)
		cout<<"empty";
	else
		{

		node *temp=head;
			while(temp->next->next!=NULL) //checking from last 2nd node
				temp=temp->next;
		//if temp->nx->nx== null =we have last 2nd null
				
		node *temp2=temp->next;		
		temp->next=NULL;
		
		delete temp2;
		}
}
void delM(int pos)
{
	node *temp=head;
	
	if(temp==NULL)
		{
		cout<<"not there";	
		return;
		}
		
	for(int i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	
	node *temp2=temp->next;
	temp->next=temp->next->next;
	delete temp2;
	
}


void display()
{
	if(head==NULL)
		cout<<"no data";
	else
	{
		node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
				
}

int main()
{
	pushE(1); //push end
	pushE(2); //push end
	pushE(4);
	pushE(5); 
	
	display();
	cout<<endl;
	
	pushF(-1);//push first
	
	display();
	cout<<endl;
	
	
	pushM(5,3);  //postion and data
	display();
	cout<<endl;
	
	delF();    //delete from front
	display();
	cout<<endl;

	delE();		//del from end
	display();
	cout<<endl;
	
	delM(3);	//del 2nd position
	display();
	cout<<endl;
	
}
