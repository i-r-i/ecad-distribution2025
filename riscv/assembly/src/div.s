.macro DEBUG_PRINT reg
csrw 0x800, \reg
.endm
	
.text
.global div              # Export the symbol 'div' so we can call it from other files
.type div, @function
div:
    addi sp, sp, -32     # Allocate stack space

    # store any callee-saved register you might overwrite
    sw   ra, 28(sp)      # Function calls would overwrite
    sw   s0, 24(sp)      # If t0-t6 is not enough, can use s0-s11 if I save and restore them
    # ...

    # do your work
    # example of printing inputs a0 and a1

    # set quotient and remainder to 0
    li   t0, 0
    li   t1, 0
    
    li t2, 0
    mv t3, a0
    # how to get number of bits in N??
    # obvious thing is just to shift until get equal to 0 but thats a loop

    li t4, 1


# find number of bits in N
count:
    blez t3, done
    srli t3, t3, 1
    addi t2, t2, 1
    j    count
done:
    # also need to add check if denom is 0

begin:
    # checking loop condition
    blez  t2, end
    sub   t2, t2, t4

    # left shift R
    slli  t1, t1, 1

    # set ls bit of R to N[i]
    srl   t3, a0, t2
    andi  t3, t3, 1 # get only first bit of N - all others are 0
    or    t1, t1, t3
    

    blt   t1, a1, begin # if R < D, skip next step, go back to top of loop
    sub   t1, t1, a1

    # set Q[i] to 1
    li   t3, 1
    sll  t3, t3, t2
    or   t0, t0, t3


    j    begin

end:

    # set a0 and a1 to values found
    mv a0, t0
    mv a1, t1
     
    # load every register you stored above
    lw   ra, 28(sp)
    lw   s0, 24(sp)
    # ...
    addi sp, sp, 32      # Free up stack space
    ret

