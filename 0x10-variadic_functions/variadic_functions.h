#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct specifier - A struct for format specifiers.
 * @spe: specifier character.
 * @f: Function pointer to print a float.
 */
typedef struct specifier
{
	char spe;
	void (*f)(va_list args);
} specifier_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /*_VARIADIC_FUNCTIONS_H_*/
