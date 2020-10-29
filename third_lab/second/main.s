format:
        .string "%d"

calculate:
    movl 4(%esp), %eax
    imull $3, %eax
    incl %eax
    ret

.globl main
main:
  pushl $13
  call calculate
  pushl %eax
  pushl $format
  call printf
  addl $3*4, %esp
  xor %eax, %eax