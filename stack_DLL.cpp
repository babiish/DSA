#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

node *head = NULL, *tail = NULL;
node * top =head;
	
void push(int x)
{
	node* temp = new node;
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;

	if (head == NULL)
	head = tail = temp;
	else
	{
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
}
 
void pop() 
{
	
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else
   {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct node* ptr;
   	
   if(top==NULL)
   cout<<"stack is empty";
   
   else 
   {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) 
	  {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main()
 {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
