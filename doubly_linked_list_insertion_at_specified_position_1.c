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

void insert_at_specified_position(int value,int position)
{
	int i;
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	for(i=0;i<position-1;i++)
	{
		temp=temp->next;
	}
	newNode->data=value;
	newNode->next=temp->next;
	temp->next->prev=newNode;
	temp->next=newNode;
	newNode->prev=temp;
	
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
	
	//inserting the element at the beginning
	 insert_at_specified_position(35,3);
	//displaying the doubly linked list
	display();
}
