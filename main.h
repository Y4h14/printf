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
	void (*f)();
} f_handler;
/*general purpose functions*/
int _printf(const char *format, ...);
int _strlen(const char *string);
int spy_cmp(char s1);
void (*get_format(char c))(va_list * ap, char *buffer);

/*printing functions*/
void print_binary(unsigned int n, char *buffer);
void print_oct(unsigned int n, char *buffer);
void print_hex_low(unsigned int n, char *buffer);
void print_hex_up(unsigned int n, char *buffer);
void print_uns(unsigned int n, char *buffer);
void print_decimal(int n, char *buffer);

/*counting functions*/
int binary_count(unsigned int n);
int decimal_count(int n);
int hex_count(unsigned int n);
int oct_count(unsigned int n);
int uns_count(unsigned int n);

/*printf buffer handling functions*/
void addto_buff(char *buffer, char c);
void addstr_buff(char *buffer, char *src);
void init_buffer(char *buffer);

/*format handler functions*/
void c_hand(va_list *ap, char *buffer);
void s_hand(va_list *ap, char *buffer);
void percent_hand(char *buffer);
void i_hand(va_list *ap, char *buffer);
void d_hand(va_list *ap, char *buffer);
void b_hand(va_list *ap, char *buffer);
void u_hand(va_list *ap, char *buffer);
void o_hand(va_list *ap, char *buffer);
void x_hand(va_list *ap, char *buffer);
void X_hand(va_list *ap, char *buffer);

#endif

