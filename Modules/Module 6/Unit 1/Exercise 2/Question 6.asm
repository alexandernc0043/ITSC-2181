# Using ONLY the add, sub and slli instruction to convert the following C statements to the corresponding RISC-V assembly. 
# Assume that the variables i is integer assigned to registers t0. 
# You can use register x0, which contains 0 and cannot be modified. 

# i = 0;

# i++;

add t0, x0, x0
add t0, t0, 1