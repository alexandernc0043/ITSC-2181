.globl main
.text
main:
	# Tests simple looping behaviour
	li x, 60 # x
	li i, 0 # i
loop:
	addi i, i, 5
	addi x, x, -1
	bne i, x, loop
	bne i, zero, success
failure:
	li a0, 0
	li a7, 93 
	ecall
	
success:
	li a0, 42 
	li a7, 93
	ecall