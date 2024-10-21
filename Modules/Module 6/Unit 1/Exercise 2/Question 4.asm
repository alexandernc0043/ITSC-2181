# Using ONLY the add, addi, sub and slli instructions to convert the following C statement to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, etc.

# f = t0
# g = t1
# j = t2

# f = g - 3 – j * 15;
# j * 15
# g - 3


sub t0, t1, 3 # set f to g - 3

add t3, t2, x0 # set t3 to j
slli t2, t2, 4 # multiply j by 16
sub t2, t2, t3 # subtract j by j

sub t0, t0, t2 # sub f by j