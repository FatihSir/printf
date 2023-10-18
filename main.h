#ifndef main_h
#define main_h


#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
* struct p_dtype - srtuct datatype
*
* @specifer: pointer to the format
* @ops: function pointer to call a specific function based on format
*/
typedef struct p_dtype
{
	char *specifer;
	int (*ops)(va_list);
} p_dtype;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int percent(va_list args);
int print_d(va_list args);
int print_int(va_list args);
#endif
