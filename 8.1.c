/* ##Lab Report-08##
1.Implement a Delete Back function to delete the last(back) element of the linked list(check underflow)
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
   node *delete_back(node *temp);

  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      head=delete_back(head);
      printf("\n");
       print_list(head);
      return 0;
  }

  node *delete_back(node *temp)
  {
      if(temp)
      {
          node *head=temp, *last;
          if(head->next!=NULL){
            while(temp->next){
                last=temp;
                temp=temp->next;
            }
            free(temp);
            last->next=NULL;
          }
          else{
            free(temp);
            head=NULL;
          }
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
          printf("%p\t %d\t %p\n ", temp, temp->value, temp->next);

            temp=temp->next;
      }
      return 0;
  }
