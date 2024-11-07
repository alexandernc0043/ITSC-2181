#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(t0 == t1){
		t2 = 1;
	}
	/*
	beq t0, t1, EQUAL # jumps to equal if done
	j END # jumps to END
	EQUAL:
		addi t2, x0, 1
	END
	*/

	/*
	bne t0, t1, END # if t0 != t1
	addi t2,zero, 1
	END:
	*/

	/*
	beg t0, t1, EQUAL // if equal jump to equal label
	addi t2, x0, 0 // else part
	j end
	EQUAL:
	addi t2, x0, 1 // if part
	END:
	*/
	return 0;
}