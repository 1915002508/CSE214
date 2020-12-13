/*
3.Implement an Insert At function to insert an element at the nth index of the linked list.
Take input n and value from user.(check index out of range)[let for the first element n=1]
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
 node *insert_at(node *temp, int pos, int value);
  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=insert_at(head,1,5);
      printf("\n");
      print_list(head);
      return 0;
  }

  node *insert_at(node *temp, int pos, int value)
  {
      node *head=temp, *prev, *new_node;
      int i=2;
      if(pos==1)
      {
          new_node=(node*)malloc (sizeof(node));
          new_node->value=value;
          new_node->next=temp;
          return new_node;
                }
                while(temp)
                {
                    prev=temp;
                    if(i==pos)
                        new_node=(node*)malloc(sizeof(node));
                    new_node->value=value;
                    new_node->next=temp->next;
                    prev->next=new_node;
                    return head;
                }
                i++;
                temp=temp->next;
                printf("Invalid Index\n");
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
