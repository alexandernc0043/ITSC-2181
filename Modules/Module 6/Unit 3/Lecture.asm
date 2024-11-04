.data
	numOne: .word 1
	numTwo: .word 1
.text
.globl main
main:
	la t0, numOne		# load address of numOne into t0
	la t1, numTwo		# load adress of numTwo into t1
	lw t4, 0(t0)		# load numOne
	lw t5, 0(t1)		# load numTwo
	
	beq t4, t5, EQUAL	# If t4 = t5, jump to EQUAL
	addi t5, t5, 1		# ELSE
	j END			# Jump
	
	EQUAL:			# EQUAL
		addi t4, t4, 1	# t4 += 1
		j END		# jump to end
	
	END:			# END
		li a0, 0	# exit code
		li a7, 93	# exit
		ecall		# call
