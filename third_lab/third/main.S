format:
   .string "%d"

.globl main
main:
    pushl $100
    pushl $1
    call rand_int
    pushl %eax
    pushl $format
    call printf
    add $4*4, %esp
    xor %eax, %eax
