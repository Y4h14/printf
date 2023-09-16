#include "main.h"
#include <stdio.h>

int c_hand(va_list *ap)
{
    char c = va_arg(*ap, int);
    write(1, &c, 1);
    return (1);
}
int s_hand(va_list *ap)
{
    
    char *c = (char *)va_arg(*ap, char *);
    write(1, c, strlen(c));
    return(strlen(c));
}
int percent_hand(void)
{
    /*char c = va_arg(ap, int);*/
    write(1, "%", 1);
    return(1);
}
int i_hand(va_list *ap)
{
    int num = va_arg(*ap, int);
    print_number(num);
    return(digit_count(num));
}
int d_hand(va_list *ap)
{
    int num = va_arg(*ap, int);
    print_number(num);
    return(digit_count(num));
}