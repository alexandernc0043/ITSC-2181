# Using ONLY the add, sub and slli instruction to convert the following C statement to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are integers assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, t6, etc.

 

# f = g * 5 – j * 32;
# f = (g * 5) – (j * 32);
# g = g * 5
# f = g
# j = j * 32
# f - j

# f = t0
# g = t1
# j = t2

add t3, t1, x0 # t3 = g

slli t1, t1, 2 # g * 4

add t1, t3, x0 # g + g

add t0, t1, x0 # f = g

slli t2, t2, 5 # j * 32

sub t0, t0, t2 # f - j