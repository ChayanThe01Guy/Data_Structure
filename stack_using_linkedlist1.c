#include <stdio.h>  
#include <stdlib.h>  

void push();  
void pop();  
void display();  

struct node {
	int val;  
	struct node *next;  
};
struct node *head;  

int count = 0;

void main () { 
    int choice = 0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4) {
		printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice) {
			case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }  
		};
	}
}  

void push ()  
{  
    int value, x;
	
		printf ("Enter the number of value you want to store\n");
		scanf("%d",&x);
	for (int i = 0; i < x; i++) {
		struct node *ptr = (struct node*) malloc (sizeof (struct node));
	
		if(ptr == NULL) {  
			printf("Stack space not create\n");   
		}
		else {  
			printf("Enter the value of stack %d\n",i + 1);  
			scanf("%d",&value);
		
			if(head == NULL) {
				ptr -> val = value;  
				ptr -> next = NULL;  
				head = ptr;  
			}
			else {  
				ptr -> val = value;  
				ptr -> next = head;  
				head = ptr;
			}
		}
		count++;
	}
}
  
void pop () {  
    int item, x;
	
    struct node *ptr; 
	
	printf ("Loaded space of stack is %d\n", count);
	printf ("Enter the number stack you want to delete\n");
	scanf("%d",&x);
	
	for (int i = 0; i < x; i++) {
		if (head == NULL) {  
			printf ("Stack Is Empty\n");  
		}  
		else {  
			item = head -> val;  
			ptr = head;  
			head = head -> next;  
			free (ptr);
			printf("POPPED item is = %d\n", item);
    	}
    	count--;
    }
} 


void display () { 
    int i; 
	
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
}
