#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct node
 {
 int data;
 struct node*next;
 };
void insertEnd(struct node** head,int data)
 {
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=data;
  new_node->next=NULL;
 if(*head==NULL)
 {
  *head=new_node;
 }
 else
 {
  struct node*temp=*head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=new_node;
 }
 printf("\Nelement %d inserted at the end\n",data);
}
void insertbeginning(struct node** head,int data)
{
  struct node*new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=data;
  new_node->next=* head;
  *head=new_node;
  printf("element %d inserted at the beginning",data);
}
 void insertAtPosition(struct node** head,int data,int position)
 {
  struct node*new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=data;
  *head=new_node;
 if(position==1)
 {
    new_node->next=*head;
    *head=new_node;
    printf("element %d inserted at position %d\n",data,position);
    return;
 }
 struct node* temp=*head;
 for(int i=1;temp!=NULL&&i<position-1;i++)
 {
   temp=temp->next;
 }
 if(temp==NULL)
 {
   printf("position out of range inserting element %d at the end\n",data);
   insertEnd(head,data);
 }
 else
 {
  new_node->next=temp->next;
  temp->next=new_node;
  printf("element %d inserted at position %d\n",data,position);
 }
}
void display(struct node* head)
{
 if(head==NULL)
 {
   printf("List is empty\m");
   return;
 }
 struct node* temp=head;
 while(temp!=NULL)
 {
   printf("%d->",temp->data);
   temp=temp->next;
 }
 printf("NULL");
}
void main()
{
  struct node* head=NULL;
  int choice,value,pos;
  clrscr();
  while(choice!=8)
  {
   printf("\nMenu");
   printf("\n 1.insert at the end\n");
   printf("\n 2.insert at the beginning\n");
   printf("\n 3.insert at a specific\n");
   printf("\n 4.delete from beginning\n");
   printf("\n 5.delete from the end\n");
   printf("\n 6.delete from a specific position\n");
   printf("\n 7.display the list\n");
   printf("\n 8.exit\n");
   printf("enter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
      printf("\nenter an elemnt to insert at the end:");
      scanf("%d",&value);
      insertEnd(&head,value);
      break;
     case 2:
      printf("\nenter an elemnt at the beginning:\n");
      scanf("%d",&value);
      insertbeginning(&head,value);
    case 3:
      printf("enter an elemnt to insert at specified position:\n");
      scanf("%d",&value);
      printf("\nenter the position of element to be inserted:\n");
      scanf("%d",&pos);
      insertAtPosition(&head,value,pos);
      break;
   case 7:
     printf("linked list\n");
     display(head);
   case 8:
     printf("exiting the program\n");
     break;
   default:
     printf("Invalid choice");
  }
 }
 getch();
}