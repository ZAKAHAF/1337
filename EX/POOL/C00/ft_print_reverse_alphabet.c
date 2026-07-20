#include <unistd.h> // header machi libr
#include <stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_print_reverse_alphabet(void)
{
    int n;
    n = 'z';
    while(n>='a')
    {
        ft_putchar(n);
        n--;
    }
}
int main()
{
    ft_print_alphabet();
}