#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head,*tail,*temp;

void addNode(int value)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	newNode->prev=NULL;
	newNode->data=value;
	newNode->next=NULL;
	
	if(head==NULL)
	{
		head=newNode;
		tail=newNode;
		
	}
	else
	{
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}
}


void deletion_at_specified_position(int position)
{
	temp = head;
	int i;
	for(i=0;i<position-1;i++)
	{
		temp = temp->next;
	}
	temp->next=temp->next->next;
	temp->next->prev = temp;
   
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

int main()
{
	//adding new node to the doubly linked list
	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);
	addNode(50);
	
	//deleting  the element at specified location
	 deletion_at_specified_position(2);
	//displaying the doubly linked list
	display();
}
