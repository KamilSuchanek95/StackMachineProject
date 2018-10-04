/*
 * StackMachine.h
 *
 *  Created on: 4 paü 2018
 *      Author: User
 */

#ifndef STACKMACHINE_H_
#define STACKMACHINE_H_

#define STACK_SIZE 32
#define EMPTY 254

extern int any_register;

typedef enum rozk {
	cmd_push,
	cmd_pop,
	cmd_add,
	cmd_mul,
	cmd_dup,
	cmd_peek,
	cmd_jmp,
	cmd_movl};

typedef struct new_stack{
    		int size;
    		int elements[STACK_SIZE];
    		enum query[100];
    		int pc; /* program counter */
    		int length_queries;
			} stack;


/* Stack Functions */



#endif /* STACKMACHINE_H_ */

