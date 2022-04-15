#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct type - connect conversion specifiers with the correct print function
 * @print: a function pointer for the print functions
 * @identifier: the conversion specifier
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _putchar(char c);
int (*get_function(const char *specifier))(va_list);
int print_F(__attribute__ ((unused))va_list args);
void print_upperHex(unsigned int num, int *count);
int print_c(va_list args);
int print_d(va_list args);
int  print_number(unsigned int n);
int countDigits(unsigned int num);
int countOctal(unsigned int num);
int countBinary(unsigned int num);
int _strlen(char *str);
int print_o(va_list args);
void print_pointer(unsigned long ptr, int *count);
int print_p(va_list args);
int print_b(va_list args);
int print_X(va_list args);
int print_Xl(va_list args);
int print_rev(va_list args);
int rot13(va_list args);
int print_s(va_list args);
int print_u(va_list args);
void print_lowerHex(unsigned int num, int *count);
int _printf(const char *format, ...);

#endif
