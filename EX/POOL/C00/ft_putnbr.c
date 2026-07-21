#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putnbr(int nb)
{
    if (nb ==-2147483648)
    {
        ft_putchar(-);
    ft_putchar(2);
    ft_putchar(147483647);
    }
    else if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putchar(nb);
    }
   else if(nb>9)
   {
    ft_putnbr(nb/10);
    ft_putnbr(nb%10);
   }
   else
   {
    ft_putchar(nbr + '0');
   }
   
}
int main()
{
    ft_putnbr(123);
}ls
