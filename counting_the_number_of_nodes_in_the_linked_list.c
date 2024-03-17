#include <stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *head,*tail,*temp=NULL;

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
 else{
   tail->next=newNode;
   tail=newNode;
 }
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

void count()
{
	int count=0;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	printf("\nthe number of nodes present in the linked list are- %d",count);
}
    

int main(void) {
	int s=0;

//adding elements in the list
  addNode(10);
  addNode(20);
  addNode(30);
  addNode(40);
  addNode(50);

//displaying the list
printf("the element of the linked list are:\n");
display();

count();
 
  
return 0;
}
