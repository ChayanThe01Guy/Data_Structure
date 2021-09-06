#include <stdio.h>  
#include <stdlib.h>  

void push(int);  
void pop();  
void display();  

struct node {
	int val;  
	struct node *next;  
};
struct node *head;  

int count = 0;

void main () {
	display();
	push(50);
	push(40);
	push(30);
	push(20);
	push(10);
	display();
	pop();
	pop();
	pop();
	display();
	free (head);
	display();
	head = NULL;
	display();
}  

void push (int x) {

	struct node *ptr = (struct node*) malloc (sizeof (struct node));
	
	if(ptr == NULL) {  
		printf("Stack space not create\n");   
	}
	else if(head == NULL) {
		ptr -> val = x;  
		ptr -> next = NULL;  
		head = ptr;  
	}
	else {  
		ptr -> val = x;  
		ptr -> next = head;  
		head = ptr;
	}
}
  
void pop () {  
    int item;
    struct node *ptr; 

	if (head == NULL) {  
		printf ("\n\nStack Is Empty\n");  
	}  
	else {  
		item = head -> val;  
		ptr = head;  
		head = head -> next;  
		free (ptr);
		printf("POPPED item is = %d\n", item);
	}
	printf ("\n");
}


void display () {
	
    struct node *ptr; 
	
    ptr = head;  
    if (ptr == NULL) {  
        printf ("Stack is empty\n");  
    }  
    else {  
        printf ("Printing Stack elements \n");  
        while (ptr != NULL) {  
            printf ("%d\n",ptr -> val);  
            ptr = ptr -> next;  
        }  
    }
    printf ("\n");
}
