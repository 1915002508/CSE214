/*
9.Copy a linked list into another linked list.Display both list before and after copy.(don't use recursion)
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
  node *copy_list(node *list1);

  int main()
  {
      node *head=NULL;
      node *list2=NULL;
      print_list(head);
      print_list(list2);
      head=create_list();
      list2=copy_list(head);
      print_list(head);
      printf("\n");
      printf("New list\n\n");

      print_list(list2);
      return 0;
  }
  node *copy_list(node *list1){
  node *head2=NULL;
  node *temp;
  temp=(node *)malloc (sizeof(node));
  temp->value=list1->value;
  temp->next=NULL;
  head2=temp;
  list1=list1->next;
  while(list1){
    temp->next=(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=list1->value;
    temp->next=NULL;
    list1=list1->next;
  }
  return head2;
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
