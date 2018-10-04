/*
 * StackMachine.c
 *
 *  Created on: 4 paü 2018
 *      Author: User
 */
#include "StackMachine.h"
#include <string.h>

/* Stack Functions */

struct new_stack init_stack(query){
	struct new_stack stack = {0,0,query,0,strlen(query)};
	return stack;
};


int if_full(struct new_stack stack){
	if(stack.size>=STACK_SIZE){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct new_stack stack){

	stack.elements[++stack.size-1] = stack.query[++stack.pc];
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
	push(stack);/*push(sum,stack);*/
	/* jak wstawic to do query? */
}

void mul(struct new_stack stack){
	int mul = pop(stack)*pop(stack);
	//push(mul,stack);
}

void dup(struct new_stack stack){
	//push(peek(stack),stack);
}

/* Interpreter Functions */

void movl(struct new_stack stack){
	stack.query[stack.pc+1]=stack.query[2+stack.pc];
	stack.pc+=2;
}

void jmp(struct new_stack stack){
	/* zapisanie rozkazu do jakiego wykonujemy skok */
	enum rozk jmp_query = stack.query[++stack.pc];
	/* dodawaj i sprawdzaj czy skok doszed≥ do danego rozkazu */
	while(stack.query[++stack.pc]!=jmp_query){
		/* w razie  */
		if (stack.pc>=stack.length_queries) break;
	};
}


void StackMachine(struct new_stack stack){


	while(stack.pc<=stack.size){

		char currentQuery = stack.query[1];

		switch (currentQuery){
			case add:	add(stack);		break;
			case mul:	mul(stack);		break;
			case pop:	pop(stack);		break;
			case push:	push(stack);	break;
			case peek:	peek(stack);	break;
			case movl:	movl(stack);	break;
			case jmp:	jmp(stack);		break;
			/* jeúli øadne nie pasuje to pewnie kolejna liczba */
			default: stack.elements[++stack.size-1] = stack.query[stack.pc];
			}
	++stack.pc;
	}
}





