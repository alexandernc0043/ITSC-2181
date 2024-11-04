    .data
arr: .word 0, 0, 0, 0       # Initialize an array with example values (0, 1, 2, 3)
    .text
    .globl main
main:
    la s0, arr              # Load the base address of arr into s0
    addi t1, x0, 0          # Initialize loop counter t1 to 0
    addi t5, x0, 4

LOOP:
    bge t1, t5, END_LOOP     # If t1 >= 4, exit the loop
    slli t2, t1, 2          # t2 = t1 * 4 (calculate the byte offset for the array element)
    add t2, t2, s0          # t2 = address of arr[t1]
    lw t3, 0(t2)            # Load arr[t1] into t3
    slli t3, t3, 3          # Multiply t3 by 8 (shift left by 3 bits)
    sw t3, 0(t2)            # Store the result back into arr[t1]
    addi t1, t1, 1          # Increment loop counter t1

    j LOOP                  # Jump back to the start of the loop

END_LOOP:
    li a0, 0                # Prepare exit code
    li a7, 93               # ECALL for exit
    ecall                   # Make the system call to exit