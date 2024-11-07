.data
	arr: .space 400
	newLine: .string "\n"
	sum: .word 0
.text 
.globl main
main:
	la 			t0, arr				# Load address of arr
	li 			t1, 0				# i
	li 			t2, 100				# max number	
loop:
	slli 		t3, t1, 2 			# i * 4
	add 		t4, t0, t3			# get correct address of arr[i]
	lw 			t5, 0(t4)			# load current index
    jal 		random
    add 		t5, x0, a0          # Generated random number to t5
    sw 			t5, 0(t4)            # Store the random number in arr[i]
    jal 		print
    addi 		t1, t1, 1 			# increment
	bne 		t1, t2, loop		# while i != 100 do loop
	bne 		t1, zero, success
print:
	add 		a0, x0, t5 			# t1nt to print
    li 			a7, 1  				# printt1nt
    ecall
    la 			a0, newLine 		# Print Newline
    li 			a7, 4  				# Print String ecall
    ecall
    jr ra 
random:
	li 			a0, 1                # Lower bound 1
    li 			a1, 100              # Upper bound 100
    li 			a7, 42 				 # ecall to generate random number
    ecall
    jr 			ra
success:
	li a0, 0
	li a7, 93
	ecall
