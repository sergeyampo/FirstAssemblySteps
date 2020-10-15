.globl calculate
calculate:
        pushl   %ebp
        movl    %esp, %ebp
        movl    8(%ebp), %eax
        imull   $3, %eax, %eax
        addl    $1, %eax
        popl    %ebp
        ret