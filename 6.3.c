/*
 3.Define a LinkList with three variable using function to print, typedef, (without using DMA )
 1915002508,Md Sazzad Hossen*/
#include<stdio.h>
typedef struct node Node;

struct node {

    int data;
    Node* next;

};

void print_List(Node* head);

int main (){

    Node a,b,c;

    Node *head;
    head = &a;
    a.data = 10;
    a.next = &b;
    b.data = 20;
    b.next = &c;
    c.data = 30;
    c.next = NULL;
    print_List(head);
}

void print_List(Node* head){

       Node* temp = head;
    while(temp){
         printf("%d\t",temp->data);

         temp=temp->next;
    }
}
