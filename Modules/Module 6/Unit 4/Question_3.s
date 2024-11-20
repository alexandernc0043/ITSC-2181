# Question 3

#f = 11;
#g = f;
#i = i * 33;

add t0, x0, 11 // f = 11
add t1, t0, x0 // g = f
add t6, t2, x0 // t6 = i 
slli t2, t2, 5 // i * 32
add t2, t2, t6 // i + i (i*33)