void write_serial(char ch) {
    // Assuming 0x10000000 is the base address of the serial port
    volatile char *serial_port = (volatile char *) 0x10000000;
    *serial_port = ch;
}

void print_hello_world() {
    char *str = "Hello, World!\n";
    while (*str) {
        write_serial(*str++);
    }
}

void main() {
    print_hello_world();
    while (1) { }  // Infinite loop to keep the kernel running
}
