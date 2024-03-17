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

void insert_at_beginning(int value)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
    
}
int main(void) {

//adding elements in the list
  addNode(20);
  addNode(30);
  addNode(40);
  addNode(50);
  addNode(60);

//displaying the list
printf("the element of the linked list before insertion are:\n");
display();

//inserting a new node at the beginning of the list

 insert_at_beginning(10);
//after inserting displaying the list
printf("\nthe elements of the list after inserting the list are:\n");
display();
 
  
return 0;
}
