/*
4.Define a Front function to display the first element of the linked list.
1915002508,Md Sazzad Hossen*/
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();
  void print_list(node *temp);
  int front_value(node *temp);
  int main()
  {
       node* head;
    head = NULL;
    head = create_list();
    print_list(head);
    printf("\nFront value is : %d",front_value(head));

        return 0;
  }

  node *create_list()
  {
      node *a, *b, *c, *d;
      a=(node*)malloc(sizeof(node));
      b=(node*)malloc(sizeof(node));
      c=(node*)malloc(sizeof(node));
      d=(node*)malloc(sizeof(node));
      a->value=10;
      a->next=b;
      b->value=20;
      b->next=c;
      c->value=30;
      c->next=d;
      d->value=40;
      d->next=NULL;
   return a;

  }
  int front_value (node *temp)
  {

        return temp->value;
  }

void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->value);
    temp = temp->next;
 }

}
