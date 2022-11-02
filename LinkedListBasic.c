#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

Node *createListOfNumber(){
    Node *head; //always stores the start of the list
    Node *tail; //always stores the last node of the list

    int num;

    printf("Enter a number to run the code or '-1' to finish it: ");
    scanf("%d", &num);

    if(num == -1)
        return NULL;
    
    head = (Node *)malloc(sizeof(Node)); //code to allocate a new node
    tail = head;//code to initialize the tail pointer
    tail->data = num;//code to store the data in the node

    while (num!= -1){
        tail->next = (Node *)malloc(sizeof(Node));//new node is allocated
        tail = tail->next;//tail pointer is updated to be the last in the list
        tail->data = num;//data is stored in the node
        printf("Enter a number to run the code or '-1' to finish it: ");
        scanf("%d", &num);
    }

    tail->next = NULL;//code to indicate the end of the list
    return head;
}
