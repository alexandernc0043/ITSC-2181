# Using ONLY the add, sub and slli instruction to convert the following C statements to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are integers assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, t6, etc. 
# You can use register x0, which contains 0 and cannot be modified. 


#f = 10; // t0

#g = f; // t1

#j = t2

add t0 , x0 , 10		# add t0 (0) by 10
add t1, t0, x0			# set t1 (g) to t1 (10) + 0

