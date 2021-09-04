#include <stdio.h>

#define SIZE 50

void push (int);
void pop ();
void display ();

int stack[SIZE], top = -1; 

void main () {
	
    push (10);
	push (20);
	push (30);
	push (40);
	push (50);
	push (60);
	push (70);
	
	
	display ();
	
	pop ();
	pop ();
	
	display ();
}


void push (int x) {
    if (top == SIZE - 1) {
		printf("\n Overflow\n");  
	}
    else {  
        top = top + 1;   
        stack[top] = x;   
    }
}



void pop () {   
    if(top == - 1) {
		printf("Underflow\n"); 
	}
    else {
		printf("POPPED item is = %d\n", stack[top]);
		top = top -1;   
	}
	printf("\n");
}



void display() {
	if(top == -1) {  
        printf("Stack is empty\n");  
    }
    else {
		for (int i = top; i >= 0; i--) {
			printf("Stack of %d is = %d\n", i, stack[i]); 
		}
	}
	printf("\n");
}
