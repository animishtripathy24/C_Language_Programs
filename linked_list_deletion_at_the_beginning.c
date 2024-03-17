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

 void delete_at_beginning()
 {
    temp=head;
    head=head->next;
    //deleting means disconnecting the field and placing the NULL at the address field
    temp->next=NULL;
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

 delete_at_beginning();
//after deletion displaying the list
printf("\nthe elements of the list after inserting at end of the list are:\n");
display();
 
  
return 0;
}
