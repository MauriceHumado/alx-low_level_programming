#ifndef VARIADIC_FUNCTIONS.H
#define VARIADIC_FUNCTIONS.H

#include <stdio.h>
#include <stdarg.h>

typedef struct printer{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
