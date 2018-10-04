/*
 * Main.c
 *
 *  Created on: 4 paŸ 2018
 *      Author: User
 */
#include "StackMachine.h"


enum query1 {
		cmd_push,45,/* umieszczenie 45 na stosie*/
		cmd_push,34,
		cmd_peek,/* wyswietlenie wierzchu stosu */
		cmd_peek,
		cmd_add, /* dodanie 2 pierwszych elementów na stosie i umieszczenie na owym */
		cmd_dup, /* umieszczenie na stosie kolejnego, takiego samego elementu jak na wierzchu */
		cmd_mul, /* add, tylko mno¿enie */
		cmd_jmp,cmd_mul, /* przeskok do instrukcji mul */
		cmd_push,150,
		cmd_dup, /* to ma zostac przeskoczone */
		cmd_mul,
		cmd_movl,any_register /* zapisanie akumulatora do rejestru */
};

void main(void){

	/* zainicjowanie stosu */
	struct new_stack stack1 = init_stack(query1);

	/* uruchomienie stosu */
	StackMachine(stack1);



}

