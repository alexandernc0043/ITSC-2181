# Note: make sure you understand the semantics of i++. 
# In this example, i is modified as well as referenced. 

# a = i++;

lw x1, 0(x11)	#load a
lw x5, 0(x15)	#load i
addi x1, x5, 1 	# a = i + 1
sw x1, 0(x11)	# store