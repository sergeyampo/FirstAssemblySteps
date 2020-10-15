.globl main
.LC0:
        .string "%d"
main:
        leal    4(%esp), %ecx //записываем адрес esp + 4 в ecx
        movl    %esp, %ebp // из esp значение записывает в ebp
        pushl   %ecx // добавляет ecx в стэк
//Складываем
        movl    $3, %eax
        movl    $5, %ebx
        addl    %eax, %ebx
        movl    %ebx, -8(%ebp)

        pushl   -8(%ebp)
        pushl   $.LC0
        call    printf
        movl    -4(%ebp), %ecx

        leal    -4(%ecx), %esp
        ret