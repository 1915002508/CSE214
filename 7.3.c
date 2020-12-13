/*
3.Define a Size function to  find the size of the linked list .
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
  int is_size(node *temp);
  int main()
  {
      node *head=NULL;
      print_list(head);
      printf("Size: %d\n", is_size(head));
      head=create_list();
      print_list(head);
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
  int is_size(node *temp)
  {
      int count=0;
      while(temp!=NULL){
        count++;
        temp=temp->next;
      }
      return count;
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
