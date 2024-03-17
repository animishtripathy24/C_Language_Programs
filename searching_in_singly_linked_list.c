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
	newNode->data = value;
	newNode->next = NULL;
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

int search(int key)
{
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return 1;
			temp=temp->next;
		}
		temp=temp->next;
	}
	return 0;
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
	int found=0;
	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);
	addNode(50);
	
	display();
	found=search(20);
	
	if(found==1)
	{
		printf("\nkey is found");
	}
	else
	{
		printf("\nkey is not found");
	}
	
	return 0;


}
