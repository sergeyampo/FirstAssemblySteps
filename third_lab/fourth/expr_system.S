.globl expr_system
expr_system:
    movl 4(%esp), %eax      //eax = a
    movl %eax, %ecx         //ecx = eax
    movl 8(%esp), %ebx      //ebx = b
    movl %ebx, %edx         //edx = ebx
    imull %ecx, %ecx        //ecx = a^2
    imull %edx, %edx        //edx = b^2
    subl %edx, %ecx         //ecx = a^2 - b^2
    addl %eax, %eax         //eax = 2*a
    imull %ebx, %eax        //eax = 2*a*b;
    xor %ebx, %ebx
    xor %edx, %edx
    ret