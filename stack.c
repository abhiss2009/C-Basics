#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

struct Stack{
	int top;
	unsigned capacity;
	int *array;
};

int isFull(struct Stack *stack){
	return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack *stack){
	return stack->top == -1;
}

struct Stack* createStack(int cap){
	struct Stack *stack = malloc(sizeof(struct Stack));
	stack->capacity = cap;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

void push(struct Stack *stack, int data){
	if(isFull(stack)){
		printf("Error: Stack is Full\n");
		return;
	}
	stack->array[++stack->top] = data;
	printf("Data Pushed: %d\n", data);
}

int pop(struct Stack *stack){
	if(isEmpty(stack)){
		printf("Error: Stack is Empty\n");
		return INT_MIN;
	}
	return stack->array[stack->top--];
}

int peek(struct Stack *stack){
	if(isEmpty)
		return INT_MIN;
	return stack->array[stack->top];
}

int main(){
	struct Stack *stack = createStack(5);
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	push(stack, 40);
	push(stack, 50);
	push(stack, 60);
	printf("Pop Data: %d\n",pop(stack));
	printf("Pop Data: %d\n",pop(stack));
	printf("Pop Data: %d\n",pop(stack));
	printf("Pop Data: %d\n",pop(stack));
	printf("Pop Data: %d\n",pop(stack));
	printf("Pop Data: %d\n",pop(stack));
	return 0;
}