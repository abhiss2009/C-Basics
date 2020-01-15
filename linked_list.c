#include "stdio.h"
#include "stdlib.h"
struct Node{
	int data;
	struct Node *next;
	};
	
void display(struct Node *d){
	while(d != NULL){
		printf("%d\n",d->data);
		d= d->next;
	}
}
 struct Node* new_node;
void front_insert(struct Node **head_ref, int new_data){
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	
}
void insertAfter(struct Node* prev_node, int new_data) 
{
    if (prev_node == NULL) 
    { 
      printf("the given previous node cannot be NULL"); 
      return; 
    } 
    new_node =(struct Node*) malloc(sizeof(struct Node)); 

    new_node->data  = new_data; 
    new_node->next = prev_node->next; 
    prev_node->next = new_node; 
} 

int main(){

	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data = 4;
	head->next = second;
	second->data =5;
	(*second).next = third;
	(*third).data =6;
	(*third).next = NULL;
	//printf("original data\n");
	//display(head);
	
	front_insert(&head, 3);
	//printf("front insert\n");
	//display(head);
	
printf("insert after second\n");
//insertAfter(new_node->next, 2);
display(head);

return(0);
}