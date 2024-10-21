# Using ONLY the add, sub and slli instruction to convert the following C statement to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are integers assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, t6, etc.

# f = t0
# g = t1
# j = t2
# t3 = j
# t4 = f * 2

# f = g – j * 33 + f * 2; //Hint: 33 = 32 + 1
# f = (g – (j * 33)) + (f * 2);

# 1. j = j * 32 
# 2. j = j + j

# 3. g = g - j
# 4. t4 = f * 2
# 5. f = g + t4

add t3, t2, x0		# t3 = j
slli t2, t2, 5		# j * 32
add t2, t2, t3		# j + j

sub t1, t1, t2		# g = g - j -> (j * 33)

slli t4, t0, 1 		# t4 = f * 2

add t0, t1, t4		# f = g + t4 -> (f * 2)