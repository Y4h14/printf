#ifndef __MAIN__H__
#define __MAIN__H__
#include <unistd.h>
#include <stdint.h>
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
/*general purpose functions*/
int _printf(const char *format, ...);
int _strlen(const char *string);
int spy_cmp(char s1);
int (*get_format(char c))(va_list * ap, char *buffer, char *format);
char spy_spec(char *format);

/*printing to the end of the buffer functions*/
void print_binary(unsigned int n, char *buffer);
void print_oct(unsigned int n, char *buffer);
void print_hex_low(unsigned int n, char *buffer);
void print_hex_up(unsigned int n, char *buffer);
void print_uns(unsigned int n, char *buffer);
void print_decimal(int n, char *buffer);
void print_string(char *string, char *buffer);
void print_stringx(char *string, char *buffer);
void print_hex_less(unsigned int x, char *buffer, unsigned int count);
void print_hex_ptr(uintptr_t address, char *buffer);
void print_rev(char *string, char *buffer);
void rot13(char *str, char *buffer);

/*Flag handling functions*/
int get_flagd(char *format, char *buffer, int sign);
int get_flagx(char *format, char *buffer);
int get_flagX(char *format, char *buffer);
int get_flago(char *format, char *buffer);

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
void addtostr_up(char c);

/*format handler functions*/
int c_hand(va_list *ap, char *buffer, char *format);
int s_hand(va_list *ap, char *buffer, char *format);
int percent_hand(char *buffer);
int i_hand(va_list *ap, char *buffer, char *format);
int d_hand(va_list *ap, char *buffer, char *format);
int b_hand(va_list *ap, char *buffer, char *format);
int u_hand(va_list *ap, char *buffer, char *format);
int o_hand(va_list *ap, char *buffer, char *format);
int x_hand(va_list *ap, char *buffer, char *format);
int X_hand(va_list *ap, char *buffer, char *format);
int S_hand(va_list *ap, char *buffer, char *format);
int p_hand(va_list *ap, char *buffer, char *format);
int r_hand(va_list *ap, char *buffer, char *format);
int R_hand(va_list *ap, char *buffer, char *format);
#endif

