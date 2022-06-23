#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);


/**
 * struct op - flag / function object
 * @c: flag
 * @f: function
 */

typedef struct op
{
	char *c;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printChar(va_list values);
int _printString(va_list values);
int _printDec(va_list values);
int _printInt(va_list ar_numlist);
int (*get_func(char s))(va_list values);
int _printf(const char *format, ...);


#endif  /* _MAIN_H */
