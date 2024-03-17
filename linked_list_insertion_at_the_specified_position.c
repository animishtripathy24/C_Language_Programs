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

void insert_at_specified_position(int value,int position)
{
	int i;
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    temp=head;
    for(i=0;i<position;i++)
    {
    	temp=temp->next;
	}
	newNode->data=value;
	newNode->next=temp->next;
	temp->next=newNode;

    
}
int main(void) {

//adding elements in the list
  addNode(10);
  addNode(20);
  addNode(30);
  addNode(40);
  addNode(50);

//displaying the list
printf("the element of the linked list before insertion are:\n");
display();

//inserting a new node at the beginning of the list

 insert_at_specified_position(35,2);
//after inserting displaying the list
printf("\nthe elements of the list after inserting at end of the list are:\n");
display();
 
  
return 0;
}
