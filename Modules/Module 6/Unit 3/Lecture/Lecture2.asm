	.data
arr: .word 0,0,0,0
	.text
	.globl main
main:
	addi t0, x0, 4 					# t0 = 4
	addi t1, x0, 0 					# t1 = i = 0
	la s0, arr
	
LOOP:
	bge t1, t0, END_LOOP			# loop condition if i >= 4
	slli t2, t1, 2 				# t2 holds shift of each int , i * 4, since each int is 4 bytes
	add t2, t2, s0 				# t2 = address of arr[i] , s0 is the assumed base address
	slli t3, t1, 4 				# t3 = i * 16
	sw t3, 0(t2)				# Store i * 4 into arr[i]
	addi t1, t1, 1				# Increment i
	j LOOP
END_LOOP:
	li a0, 0				# exit code
	li a7, 93				# exit
	ecall					# call