#include <stdio.h>

#define SIZE 50

void push ();
void pop ();
void display ();

int stack[SIZE], top = -1, choice = 0, n, count = 0; 

void main () {
	
	printf("Enter the number of elements in the stack \n");   
    scanf("%d",&n);  
    printf("\n*********Stack operations using array*********");  
  
	printf("\n----------------------------------------------\n");
	
    while(choice != 4)  
    {  
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);
		
        switch(choice)  
        {  
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


void push () {
	int x, y;
    if (top == n) {
		printf("\n Overflow\n");  
	}
    else {
		printf ("Empty space of stack is %d\n", n - count);
		printf ("Enter the number of value you want to store\n");
		scanf("%d",&y);
		for (int i = 0; i < y; i++) {
			printf("Enter the value of stack %d is\n",i + 1);  
			scanf("%d",&x);
			top++;   
			stack[top] = x;
			count++;
		}
    }
}



void pop () {
	int y;
    if(top == - 1) {
		printf("Underflow\n"); 
	}
    else {
		printf (" Loaded space of stack is %d\n", count);
		printf ("Enter the number stack you want to delete\n");
		scanf("%d",&y);
		for (int i = 0; i < y; i++) {
			printf("POPPED item is = %d\n", stack[top]);
			top--;
			count--;
		}
	}
	printf("\n");
}



void display() {
	if(top == -1) {  
        printf("Stack is empty\n");  
    }
    else {
		for (int i = top; i >= 0; i--) {
			printf("Stack of %d is = %d\n", i + 1, stack[i]); 
		}
	}
	printf("\n");
}
