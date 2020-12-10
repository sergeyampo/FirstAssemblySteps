.globl calc
	calc:
        fld 4(%esp)
        fcos
        fld 8(%esp)
        faddp
        fsin
    ret
