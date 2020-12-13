/*
6.Define a search function to find a key ( take input key from user ).Print Found if the search key is found in the linked list otherwise print Not Found
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
  void search_value(node* head,int a);
  int search(node *temp,int key);
  int main()
  {
       node* head;
    head = NULL;

    head = create_list();
    printf("Search 10: %d\n",search(head, 10));
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

int search(node *temp,int key){
int found=0;
if(temp){
while(temp!=NULL){
    if(key=temp->value){
        return 1;

    }
    temp=temp->next;
}
if(found==1){
    printf("FOUND");
}
else("NOT FOUND");
}
return 0;
}





void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->value);
    temp = temp->next;
 }

}
