.data
	arr: .word
.text 
.globl main
main:
	la t0, arr		# Load address of arr
	li t1, 0		# i
	li t6, 100		# max number

loop:
	slli t2, t1, 2 		# i * 4
	add t3, t0, t2		# get correct address of arr[i]
	lw t4, 0(t3)		# load current index
	
	li a7, 41		# get a random number
	ecall
	addi t4, x0, a0		# assign value to t4 (arr[i])
	
	bne t1, t6, loop	# while i != 100 do loop
	bne t1, zero, success
success:
	li a0, 0
	li a7, 93
	ecall