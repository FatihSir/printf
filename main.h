#ifndef main_h
#define main_h


#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct p_dtype - srtuct datatype
*
* @specifer: pointer to the format
* @ops: function pointer to call a specific function based on format
*/
typedef struct p_dtype
{
	char *specifer;
	void (*ops)(va_list);
} p_dtype;

void printstr(char *str, int len);
int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
void print_int(va_list args);
#endif
