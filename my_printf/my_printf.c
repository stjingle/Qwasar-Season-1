#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h> // This should Include stdint.h for uintptr_t

#define BUFFER_SIZE 1024

static int g_printed_chars = 0; // Global variable declaration to keep track of the character to be printed

static void write_xter(char c) {
    write(1, &c, 1);
    g_printed_chars++;
}

static void write_string(const char * str) {
    if (str == NULL) {
        write_string("(null)");
        return;
    }
    while (*str) {
        write_xter(*str++);
    }
}

static void write_int(int nbr) {
    char buffer[BUFFER_SIZE];
    int i = 0;
    int neg_chk = 0;

    if (nbr == 0) {
        write_xter('0');
        return;
    }
    //check if the number is a negative number.
    if(nbr<0){
        neg_chk=1;
        nbr = -nbr; //to convert the negative number to a positive number
    }
    while (nbr != 0) {
        buffer[i++] = '0' + (nbr % 10);
        nbr /= 10;
    }
    if(neg_chk){
        buffer[i++] = '-';
    }
    while (i > 0) {
        write_xter(buffer[--i]);
    }
}

static void write_octal(unsigned int nbr) {
    char buffer[BUFFER_SIZE];
    int i = 0;

    if (nbr == 0) {
        write_xter('0');
        return;
    }

    while (nbr != 0) {
        buffer[i++] = '0' + (nbr % 8);
        nbr /= 8;
    }

    while (i > 0) {
        write_xter(buffer[--i]);
    }
}

static void write_hexadec_lower(uintptr_t nbr) {
    char buffer[BUFFER_SIZE];
    const char *hexa_dec = "0123456789abcdef";
    int i = 0;

    if (nbr == 0) {
        write_xter('0');
        return;
    }

    while (nbr != 0) {
        buffer[i++] = hexa_dec[nbr % 16];
        nbr /= 16;
    }

    while (i > 0) {
        write_xter(buffer[--i]);
    }
}

 static void write_hexadec_upper(uintptr_t nbr) {
    char buffer[BUFFER_SIZE];
    const char *hexa_dec = "0123456789ABCDEF";
    int i = 0;

    if (nbr == 0) {
        write_xter('0');
        return;
    }

    while (nbr != 0) {
        buffer[i++] = hexa_dec[nbr % 16];
        nbr /= 16;
    }

    while (i > 0) {
        write_xter(buffer[--i]);
    }
}

int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    g_printed_chars = 0; // To Reset the count of the printed characters

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) { 
                case 'd':
                    write_int(va_arg(args, int));
                    break;
                case 'o':
                    write_octal(va_arg(args, unsigned int));
                    break;
                case 'u':
                    write_int(va_arg(args, unsigned int));
                    break;
                case 'x':
                    write_hexadec_upper((uintptr_t)va_arg(args, void *));
                    break;
                case 'c':
                    write_xter((char)va_arg(args, int));
                    break;
                case 's':
                    write_string(va_arg(args, const char *));
                    break;
                case 'p':
                    write_string("0x");
                    write_hexadec_lower((uintptr_t)va_arg(args, void *));
                    break;
                case 'X': // Handle uppercase hexadecimal
                    write_hexadec_upper((uintptr_t)va_arg(args, void *));
                    break;
                default:
                    write_xter('%');
                    write_xter(*format);
                    break;
            }
        } else {
            write_xter(*format);
        }
        format++;
    }

    va_end(args);
    return g_printed_chars;
}