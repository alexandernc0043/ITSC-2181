.data
	A: .word 10,11,12,13
	sum: .word 0
.text
main:
	la t0, A
	
	lw t1, 0(t0)	# Load A[0] into t1
	lw t2, 4(t0)	# Load A[1] into t2
	lw t3, 8(t0)	# Load A[2] into t3
	lw t4, 12(t0)	# Load A[3] into t4
	
	add t5, t1, t2	# Add t5 = t1 + t2
	add t5, t5, t3	# Add t5 = t5 + t3
	add t5, t5, t4	# Add t5 = t5 + t4
	
	la t6, sum	# Load sum into t6
	sw t5, 0(t6)	# Store Sum into t6
	
	li a0, 0 	# Exit Code
	li a7, 93	# Exit 
	ecall		# Call exit
