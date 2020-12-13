/*
Implement a Delete At function to delete the nth element of the linked list.Take input n from user.
(check underflow and index out of range).[Let for the first element n=1]
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
   node *delete_at(node *temp, int pos);

  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=delete_at(head,50);

      return 0;
  }

  node *delete_at(node *temp, int pos)
  {
     if(temp){
        node *head=temp;
        node *prev, *next;
        int n=1;
        if(pos!=1){
            while(n<pos && temp){
                prev=temp;
                temp=temp->next;
                n++;
            }
            if(temp==NULL && n<pos){
                printf("Invalid Index\n");
                return 0;
            }
            prev->next=temp->next;
            free(temp);
        }
        else{
            head=temp->next;
        free(temp);
        return head;
     }

      printf("Underflow Linked List\n");
      return temp;
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

