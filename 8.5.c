/*
5.Implement a clear function to delete the all element of the linked list.
1915002508,Md Sazzad Hossen*/
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};

  void print_list(node *temp);
  node *create_list();
  node *clear_list(node *temp);

  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=clear_list(head);
      print_list(head);
      return 0;
  }

  node *clear_list(node *temp){
  if(temp){
    node *to_delete;
    while(temp){
        to_delete=temp;
        temp=temp->next;
        free(to_delete);
    }
    return NULL;
  }

  printf("Underflow Linked List\n");
  return NULL;


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
  void print_list(node *temp)
  {

      while(temp!=NULL)
      {
          printf("%p\t %d\t %p\n ", temp, temp->value);

            temp=temp->next;
      }
      return 0;
  }
