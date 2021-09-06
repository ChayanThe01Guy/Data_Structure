#include <stdio.h>
#include <stdlib.h>

void push (int *);
void pop (int *);
void display (int *);

int top = -1, choice = 0, n, count = 0; 

int main () {
	
	printf("Enter the size of stack \n");   
    scanf("%d",&n);
	
	int *stack = (int*) calloc (n, sizeof(int));
	
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
                push(stack);  
                break;  
            }  
            case 2:  
            {  
                pop(stack);  
                break;  
            }  
            case 3:  
            {  
                display(stack);  
                break;  
            }  
            case 4:   
            {  
		free (stack);
		display(stack);
		stack = NULL;
		display(stack);
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


void push (int *stack) {
	int x, y;
    if (top == n) {
		printf("\n Overflow\n");  
	}
    else {
		printf ("Empty space of stack is %d\n", n - count);
		printf ("Enter the number of value you want to store\n");
		scanf("%d",&y);
		if (y <= n - count) {
			for (int i = 0; i < y; i++) {
			printf("Enter the value of stack %d is\n",i + 1);  
			scanf("%d",&x);
			top++;   
			stack[top] = x;
			count++;
			}
		}
		else {
			printf ("You Enter morethan %d\n", n - count);
		}
		
    }
}



void pop (int *stack) {
	int y;
    if(top == - 1) {
		printf("Underflow\n"); 
	}
    else {
		printf ("Loaded space of stack is %d\n", count);
		printf ("Enter the number stack you want to delete\n");
		scanf("%d",&y);
		if (y <= count) {
			for (int i = 0; i < y; i++) {
			printf("POPPED item is = %d\n", stack[top]);
			top--;
			count--;
			}
		}
		else {
			printf ("You Enter morethan %d\n", count);
		}
	}
	printf("\n");
}


void display(int *stack) {
	if(top == -1 || stack == NULL) {  
        printf("Stack is empty\n");  
    }
    else {
		for (int i = top; i >= 0; i--) {
			printf("Stack of %d is = %d\n", i + 1, stack[i]); 
		}
	}
	printf("\n");
}
