	.data
arr:
	.space  400
sum:
	.word   0
newLine:
	.string "\n"

	.text
	.globl  main
main:
	la      t0, arr           # Load address of arr
	li      t1, 0             # i
	li      t2, 100           # max number
	la      t6, sum           # load sum
	lw      s0, 0(t6)         # sum loaded into s0
loopOne:
	slli    t3, t1, 2         # i * 4
	add     t4, t0, t3        # get correct address of arr[i]
	lw      t5, 0(t4)         # load current index
	jal     random
	add     t5, x0, a0        # Generated random number to t5
	sw      t5, 0(t4)         # Store the random number in arr[i]
	addi    t1, t1, 1         # increment
	bne     t1, t2, loopOne   # while i != 100 do loop
	li      t1,0              # set i = 0
	bne     t1, zero, loopTwo # jump to loopTwo
loopTwo:
	slli    t3, t1, 2         # i * 4
	add     t4, t0, t3        # address of arr[i]
	lw      t5, 0(t4)         # load current index
	add     s0, s0, t5        # add to sum
	addi    t1,t1, 1          # increment i
	bne,    t1, t2, loopTwo   # loop if i != 100
	bne,    t1, zero, success # if done jump to sucess
random:
	li      a0, 1             # Lower bound 1
	li      a1, 100           # Upper bound 100
	li      a7, 42            # ecall to generate random number
	ecall
	jr      ra
success:
	li      a0, 0
	li      a7, 93
	ecall
