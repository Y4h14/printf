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
int spy_cmp(char s1);
int (*get_format(char c))(va_list * ap);

/*printing functions*/
void print_binary(unsigned int n);
void print_oct(unsigned int n);
void print_hex_small(unsigned int n);
void print_hex_cap(unsigned int n);
void print_uns(unsigned int n);
void print_decimal(int n);

/*counting fucntions*/
int binary_count(unsigned int n);
int digit_count(int n);
int hex_count(unsigned int n);
int oct_count(unsigned int n);
int uns_count(unsigned int n);

/*format handler funtions*/
int c_hand(va_list *ap);
int s_hand(va_list *ap);
int percent_hand(void);
int i_hand(va_list *ap);
int d_hand(va_list *ap);
int b_hand(va_list *ap);
int u_hand(va_list *ap);
int o_hand(va_list *ap);
int x_hand(va_list *ap);
int X_hand(va_list *ap);
#endif

