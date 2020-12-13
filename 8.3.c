/*
3.Implement a Delete value function to delete value(key) from the linked list.Take input the delete key from user(check underflow and not found)
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
   node *delete_value(node *temp, int key);

  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=delete_value(head,50);

      return 0;
  }

  node *delete_value(node *temp, int key)
  {
      if(temp){
      node *head=temp, *prev;
      while(temp)
      {
          if(temp->value==key)
          {
              if(head==temp){
                head=temp->next;
                free(temp);
                return head;
              }
              else{
                prev->next=temp->next;
                free(temp);
                return head;
              }
          }
          prev=temp;
          temp=temp->next;
      }
      printf(" Node Not Found\n");
      return head;
  }

      printf("Underflow Linked List\n");
      return temp;
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


