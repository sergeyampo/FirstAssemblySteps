.data
a: .int 60
b: .int 58

msg:
    .string "x= %d y= %d\n"

.globl main
main:
    pushl b //второй аргумент
    pushl a //первый аргумент
    call expr_system
    add $2*4, %esp
    pushl %eax  //y
    pushl %ecx  //x
    pushl $msg
    call printf
    add $3*4, %esp
    xor %eax, %eax
    xor %ecx, %ecx