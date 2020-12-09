//design a priority queue data structure //

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    int priority;
    struct node* next;
} Node;
Node *head;


int top(Node** head);
void pop(Node** head);
void push(Node** head, int d, int p);
int isEmpty(Node** head);
int size(Node **head);


Node* newNode(int d, int p){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
};






int top(Node** head){
    return (*head)->data;
}

void pop(Node** head){
    Node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}


void push(Node** head, int d, int p){
    Node* start = (*head);
    Node* temp = newNode(d, p);
    if ((*head)->priority < p){
        temp->next = *head;
        (*head) = temp;
    }
    else{
        while (start->next != NULL && start->next->priority < p){
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}



int isEmpty(Node** head){
    return (*head) == NULL;
}

int size(Node **head){
    int con = 1;
    Node *count = (*head);
    while(count->next != NULL){
        con++;
        count = count->next;
    }
    return con;

}

int main()
{
    Node *head;
    Node* pq = newNode(4, 1);
    push(&pq, 9, 2);
    push(&pq, 7, 3);
    push(&pq, 1, 4);
    push(&pq, 8, 5);
    push(&pq, 5, 6);
    push(&pq, 10, 7);

    printf("\nTotal Size Of Priority Queue : %d \n",size(&pq));
    printf("\n");
    while (!isEmpty(&pq)) {
        printf("Priority No = %d : Value = %d  \n",pq->priority, top(&pq));
        pop(&pq);
    }

    return 0;
}
