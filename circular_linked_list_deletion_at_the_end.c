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

void deletion_at_the_end()
{
	temp=head;
    while(temp->next!=head)
    {
    	temp=temp->next;
	}
	tail->next=NULL;
	temp->next=head;
	tail=temp;
}

void display()
{
	temp=head;
	while(temp->next!=tail)
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
	
	deletion_at_the_end();
	
	//displaying the circular linked list
	
	display();
}
