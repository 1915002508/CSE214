/*
2.Define a Empty function to check whether the linked list is empty or not.
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
  int is_empty(node *temp);
  int main()
  {
      node *head=NULL;
      print_list(head);
      printf("Empty: %d\n", is_empty(head));
      head=create_list();
      print_list(head);
      return 0;
  }
  int is_empty(node *temp)
  {
      if(temp==NULL)
      {
          return 1;
      }
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

  void print_list(node *temp)
  {

      while(temp!=NULL)
      {
          printf("%p\t %d\t %p\n ", temp, temp->value, temp->next);
          temp=temp->next;
      }
      return 0;
  }
