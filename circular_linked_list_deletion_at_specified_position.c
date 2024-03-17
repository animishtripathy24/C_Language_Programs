#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head,*tail,*temp=NULL;

void addNode(int value)
{
	struct node *newNode=(struct node*)malloc(sizeof(struct node));
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
		tail=newNode;
		tail->next=head;
	}
}

void deletion_at_specified_position(int position)
{
	int i;
	temp=head;
	for(i=0;i<position-1;i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
	
}

void display()
{
	temp=head;
	while(temp->next!=head)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}

int main()
{
	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);
	addNode(50);
	
	deletion_at_specified_position(2);
	
	//displaying the circular linked list
	display();
}
