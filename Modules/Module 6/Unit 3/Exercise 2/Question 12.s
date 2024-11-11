lw x1, 0(x11)
lw x5, 0(x15)
add t0, x0, x0 # t0 = 0 (max)
add x5, x0, 100 # i = 100
loop:
	add x1, x1, x5 # a = a + i
	sub x5, x5, 1 # increment
	bne x5, t0, loop #loop
	j exit
exit:
	sw x1, 0(x11)