 #include<stdio.h>
#include<stdlib.h>

 struct node
 {
    int data;
    struct node *next;
 }*head,*tail;
struct node *getnode(){
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter the data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   return newnode;
 }
 void create(){
     struct node *newnode=getnode();
     if(head==NULL){
        head=tail=newnode;
     }
     else{
        tail->next=newnode;
        tail=newnode;
     }
 }
 void display(){
     struct node *temp;
     temp=head;
     while(temp!=NULL){
            if(temp->next == NULL){
                printf("%d",temp->data);
                break;
            }
        printf("%d-->",temp->data);
        temp=temp->next;

     }

  }
  struct node *beginsert(){
      struct node *temp;
      temp=getnode();
      temp->next=head;
      head=temp;
      display();
  }
   void middleinsert(){
     int pos;
     struct node* i;
     i=getnode();
     printf("enter position:");
     scanf("%d",&pos);
     struct node *ptr,*temp;
     temp=ptr=head;
     for(int i=0;i<pos-1;i++){
        temp=temp->next;
     }
     ptr=temp->next;
     temp->next=i;
     i->next=ptr;

  }

  void lastinsert(){
      struct node *temp;
      temp=getnode();
      tail->next=temp;
      tail=temp;
      display();
  }
  void main(){
   int choice;
   printf("1:create\n2:Display\n3:begin insert\n4:middle insert\n 5:last insert\nexit");
   while(1){
   printf("\nenter your choice:");
   scanf("%d",&choice);
   switch(choice){
  case 1:
      create();
      printf("node is created");
      break;
  case 2:
      display();
      break;
  case 3:
      beginsert();
      break;
  case 4:
      middleinsert();
      break;
  case 5:
      lastinsert();
      break;
  default:
     exit(0);
   }
   }
  }

















