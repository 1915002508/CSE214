/*
2.Implement an Insert Back function to insert an element at the end(back) of the linked list.
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
node *insert_back(node *temp, int key);


  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=insert_back(head,5);
      printf("\n");
      print_list(head);
      return 0;
  }

  node *insert_back(node *temp, int key)
  {
      if(temp==NULL)
      {
          node *new_head;
          new_head=(node*)malloc(sizeof(node));
          new_head->value=key;
          new_head->next=temp;
          return new_head;
      }
      node *head=temp;
      while(temp->next){
        temp=temp->next;
      }
      node *new_node;
      new_node=(node*)malloc(sizeof(node));
          new_node->value=key;
          new_node->next=NULL;
          temp->next=new_node;

      return head;
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





