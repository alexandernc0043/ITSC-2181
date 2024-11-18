.data
	arr: .space 400
	newLine: .string "\n"
.text 
.globl main
main:
	la 			t0, arr				# Load address of arr
	li 			t1, 0				# i
	li 			t6, 100				# max number	
loop:
	slli 		t2, t1, 2 			# i * 4
	add 		t3, t0, t2			# get correct address of arr[i]
	lw 			t4, 0(t3)			# load current index
    jal 		random
    add 		t4, x0, a0          # Generated random number to t4
    sw 			t4, 0(t3)            # Store the random number in arr[i]
    jal 		print
    addi 		t1, t1, 1 			# increment
	bne 		t1, t6, loop		# while i != 100 do loop
	bne 		t1, zero, success
print:
	add 		a0, x0, t4 			# Int to print
    li 			a7, 1  				# printInt
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
