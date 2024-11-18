	.data
arr:
	.space  400
maximum:
	.word   0
newLine:
	.string "\n"
line:
	.string "Maximum: "

	.text
	.globl  main

main:
	la      t0, arr
	li      t1, 0           # I
	li      t2, 100         # Number of times to loop
	la      t6, maximum     # Maximum (Biggest number)
	lw      s0, 0(t6)       # Load Maximum
	j       LOOPONE
RANDOM:
	li      a0, 1           # minimum bound
	li      a1, 100         # maximum bound
	li      a7, 42          # generate RANDOM number
	ecall                   # call
	jr      ra              # return
LOOPONE:
	slli    t3, t1, 2       # i * 4 (buffer)
	add     t4, t0, t3      # Buffer + base address
	lw      t5, 0(t4)       # t5 = arr[i]
	jal     RANDOM          # jump and link to RANDOM (generate RANDOM number output goes to a0)
	add     t5, x0, a0      # put the RANDOM number into arr[i]
	sw      t5, 0(t4)       # store
	addi    t1, t1, 1       # increment
	bne     t1, t2, LOOPONE # loop
	li      t1, 0
	j       LOOPTWO
LOOPTWO:
	slli    t3, t1, 2       # i * 4
	add     t4, t0, t3      # Buffer + base address
	lw      t5, 0(t4)       # t5 = arr[i]
	bge     t5, s0, GREATER # if t5 (arr[i]) > s0 (Maximum)
	addi    t1, t1, 1       # increment
	bne     t1, t2, LOOPTWO # loop
	j       PRINT           # jump to print
GREATER:
	mv      s0, t5          # Maximum is now arr[i]
	jr      ra              # return
PRINT:
	la      a0, line        # string to print
	li      a7, 4           # print string
	ecall                   # call
	mv      a0, s0          # number to print
	li      a7, 1           # int print
	ecall                   # call
	la      a0, newLine     # string to print
	li      a7, 4           # print string
	ecall                   # call
	j       EXIT            # jump to exit
EXIT:
	li      a0, 1           # exit code
	li      a7, 93          # exit
	ecall                   # call