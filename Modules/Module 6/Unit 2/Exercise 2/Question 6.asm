# a = a * 128;
# b  += 10;
# a -= b;
# la += a + b;

lw x1, 0(x11)		# load a
lw x2, 0(x12)		# load b
lw x3, 0(x13)		# load la

slli x1, x1, 7		# a = a * 128
addi x2, x2, 10 	# b = b + 10
sub x1, x1, x2 		# a = a - b
addi x22, x1, x2 	# x22 = a + b
add x3, x3, x22 	# la += x22 (a + b)
sd x3, 0(x13)