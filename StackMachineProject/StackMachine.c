#include "StackMachine.h"
#include <string.h>

/*
	cmd_jmp
	cmd_movl
 */

/* typedef struct new_stack
		{
    		int size;
    		int elements[STACK_SIZE];
		};*/
/* Stack Functions */

char query[]= {cmd_push,45
		,cmd_push,34,
		cmd_peek,
		cmd_peek,
		cmd_add,
		cmd_dup,
		cmd_mul};

typedef enum rozk {
	cmd_push,
	cmd_pop,
	cmd_add,
	cmd_mul,
	cmd_dup,
	cmd_peek};


typedef struct new_stack{
    		int size;
    		int elements[STACK_SIZE];
		} stack;

int if_full(struct new_stack stack){
	if(stack.size>=STACK_SIZE){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int value, struct new_stack stack){

	stack.elements[++stack.size-1] = value;
}

int pop(struct new_stack stack){
	return stack.elements[-1+stack.size--];
}

int peek(struct new_stack stack){
	return stack.elements[stack.size-1];
}

/* Operands */

void add(struct new_stack stack){
	int sum = pop(stack)+pop(stack);
	push(sum,stack);
}

void mul(struct new_stack stack){
	int mul = pop(stack)*pop(stack);
	push(mul,stack);
}

void dup(struct new_stack stack){
	push(peek(stack),stack);
}

void main(void){
	
	char *query=t_query;
	char currentQuery = query[1];
	/* */	
switch (currentQuery){
	case add:  
	break;
	case mul: 
	break; 
	case pop: 
	break; 
	case push:  
	break;	
	case peek: 
	break; 
	case pop: 
	break;
}

}


