// clear; gcc Assembly\ and\ C.c -o asmac; ./asmac; rm asmac

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int num = 0x04; // 0000 0000 Binary
	unsigned int shift = 2;
	unsigned int result = num << shift; // 4 * 2^2 = 10
	printf("%d\n", result); // prints 16
	/*
	li t1, 4 // immediate value of 4
	li t2, 2 // shift ammount (2)
	slli t0, t1, t2 // shift t1 by t2 into t0
	*/

	num = 0x01; // 0000 0001 1
	result = num << 3; // 0000 1000 8
	printf("%d\n",result); // prints 8
	/*
	slli t0, t1, 3 // t0 = t1 << 3
	*/
	num = 0x10; // 0001 0000
	shift = 1;
	result = num >> shift;
	printf("%d\n",result); // prints 8 0000 1000
	/*
	li t1, 16 // immediate value of 16
	li t2, 1 // shift amount (1)
	srl t0, t1, t2 shift t1 by t2 into t0
	*/
	num = 0x10; // 0001 0000 - 16
	result = num >> 2; // 0000 0100 - 4
	printf("%d\n",result); // prints 4 0000 0100
	/*
	li t1, 16
	srli t0, t1, 2
	*/
	return 0;
}