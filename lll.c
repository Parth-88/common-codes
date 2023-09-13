#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;



void printList(){
   struct node *p = head;
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
  
}

void insert(int data){
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
  lk->next = NULL;
  
   linkedlist->next = lk;
}

void delete(){
   struct node *linkedlist = head;
   while (linkedlist->next->next != NULL)
      linkedlist = linkedlist->next;
   linkedlist->next = NULL;
}

void main(){
   int k=0;
  
   insert(30);
   insert(44);
   printf("Linked List: ");

   
   printList();

    struct node *temp = head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = head;
 

}