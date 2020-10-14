.data
    msg:
    .string "Hello world!\n"
.globl main
 main:
  pushl $msg
  call printf
  popl %eax
  xor %eax, %eax
  ret