#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node* next;
};
struct node *head;

void insert_beg(){
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    if ( ptr == NULL){
        printf ("overflow \n");
        return ;
    }
    printf("input new node value");
    scanf("%d", &ptr -> val);
    ptr -> next = head;
    head = ptr ;

}
void insert_end(){
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if ( ptr == NULL){
        printf("linked list overflow \n");
        return;
    }
    printf("input new node ");
    scanf ("%d", &ptr -> val);
    temp = head;
    while ( temp -> next !=NULL){
        temp = temp -> next;
    }
    temp -> next = ptr;
    ptr -> NULL;
}

void insert_mid(){
    
}