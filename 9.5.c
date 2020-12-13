/*
5.Implement an Insert After function to insert an element after a node with value key of the linked list.
Take input key and new node value from user.(check index out of range).
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
 node *insert_before(node *temp, int key, int value);
  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=insert_before(head,1,10);
      printf("\n");
      print_list(head);
      return 0;
  }

  node *insert_before(node *temp, int key, int value)

  {

      node*prev, *head=temp;
      while(temp){
        if(temp->value==key){
                if(temp==head){
            node *new_node=(node*)malloc(sizeof(node));
            new_node->value=value;
            new_node->next=temp;
            return new_node;
        }
        else{
             node *new_node=(node*)malloc(sizeof(node));
            new_node->value=value;
            new_node->next=temp;
            prev->next=new_node;
            return head;
        }
        prev=temp;
        temp=temp->next;
      }
      printf("Element Not Found\n");
      return head;
  }
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
