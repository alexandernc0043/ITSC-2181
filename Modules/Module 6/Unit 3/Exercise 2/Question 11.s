lw x1, 0(x11)
lw x5, 0(x15)
add t0, x0, 100 # t0 = 100 (max)
add x5, x0, x0 # i = 0
loop:
	add x1, x1, x5 # a = a + i
	add x5, x5, 1 # increment
	bne x5, t0, loop #loop
	j exit
exit:
	sw x1, 0(x11)