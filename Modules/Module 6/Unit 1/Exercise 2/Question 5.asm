# Using ONLY the add, sub and slli instruction to convert the following C statements to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are integers assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, t6, etc. 
# You can use register x0, which contains 0 and cannot be modified. 


# f = f * 128;

# g  += 10;

# j -= g;

# f += g + j;

slli t0, t0, 7 # multiply f by 128
add t1, t1, 10 # g += 10
sub t2, t2, t1 # j -= g
add t3, t1, t2 # t3 = g + j
add t0, t0, t3 # f += (g+j)