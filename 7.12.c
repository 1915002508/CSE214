/*
12.Define a function to merge two sorted Linked List into a sorted Linked List. Display all the
list before and after merging.
1915002508,Md Sazzad Hossen*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
}Node;

Node* create_list1();
Node* create_list2();
void print_list(Node *temp);
Node* merge_list(Node *list1, Node *list2);

int main()
{
    Node *head = NULL;
    Node *list = NULL;
    Node *list1 = NULL;
    Node *list2 = NULL;

    list1 = create_list1();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    list = merge_list(list1, list2);
    print_list(list);
    }
    Node* create_list1()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 41;
    a->next = b;

    b->value = 42;
    b->next = c;

    c->value = 43;
    c->next = d;

    d->value = 44;
    d->next = NULL;

    return a;
}

Node* create_list2()
{
    Node *a, *b, *c, *d;

    a = (Node *) malloc(sizeof(Node));
    b = (Node *) malloc(sizeof(Node));
    c = (Node *) malloc(sizeof(Node));
    d = (Node *) malloc(sizeof(Node));

    a->value = 45;
    a->next = b;

    b->value = 46;
    b->next = c;

    c->value = 47;
    c->next = d;

    d->value = 48;
    d->next = NULL;

    return a;
}

void print_list(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

Node* merge_list(Node *list1, Node *list2)
{
    Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
