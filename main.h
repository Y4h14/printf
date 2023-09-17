#ifndef __MAIN__H__
#define __MAIN__H__
#include <unistd.h>
#include <stdarg.h>
/**
 * struct format_handler -  a struct that handles the format of strings
 * @spec: the specifing char
 * @f: a callback function
 */
typedef struct format_handler
{
	/*
	* unsigned int width;
	* int pers;
	* char fill_char;
	*/
	char *spec;
	int (*f)();
} f_handler;

int _printf(const char *format, ...);
int _strlen(const char *string);
int digit_count(int n);
void print_decimal(int n);

void print_binary(unsigned int n);

int binary_count(unsigned int n);
int spy_cmp(char s1);
int (*get_format(char c))(va_list * ap);

/*format handler funtions*/

int c_hand(va_list *ap);
int s_hand(va_list *ap);
int percent_hand(void);
int i_hand(va_list *ap);
int d_hand(va_list *ap);
int b_hand(va_list *ap);
#endif

