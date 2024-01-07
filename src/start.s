.section .text
.global _start

_start:
    la sp, stack_top   # Set up the stack pointer
    call main          # Call your main function
    j _start           # Loop indefinitely

.section .bss
.align 4
stack:
    .space 4096        # 4KB stack
stack_top:
