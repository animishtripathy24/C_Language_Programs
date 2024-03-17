#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head,*tail,*temp,*current,*prev,*next=NULL;

void addNode(int value)
{
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
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
	}
}

void reverse()
{
	current=head;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
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
	//creating the singly linked list
	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);
	addNode(50);
	
	//displaying the list
	printf("the linked list before reversing is:\n");
	display();
	//reversing the linked list
	reverse();
	//displaying the list after reversing
	printf("\nthe linked list after reversing is:\n");
	display();
}
