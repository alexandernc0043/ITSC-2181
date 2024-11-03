# Note: in this program, la is modified twice, 
# thus its data needs to be stored to its memory location twice, 
# i.e., each time it is modified. 

# la = a * 1024;

# lb = b * 2^^30;

# la = la + lb;

ld x3, 0(x13)		# load la
ld x4, 0(x14)		# load lb
lw x1, 0(x11)		# load a
lw x2, 0(x12) 		# load b

slli x3, x1, 10 	# a * 1024
sd x3, 0(x13) 		# store

slli x22, 2, 30 	# x22 = 2^30
slli x3, x2, x22 	# x3 = b * 2 ^ 30
sd x4, 0(x14)		# store

add x3, x3, x4  	# la = la + lb
sd x3, 0(x13)		# store