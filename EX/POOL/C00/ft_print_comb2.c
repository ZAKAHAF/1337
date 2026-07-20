#include <unistd.h>
void ft_putchat(char c)
{
    write(1,&c,1);
}
void ft_comb2(void)
{
    int a ;
    a = '0';
    while(a<=98) //madam a sghar ola katsawi 98  
    {
        b = a + 1; // b = a nzidoha wahd lia hia 99
            while(b<=99) // madam b sghar ola klatsawi 99 
            ¨{
            ft_putchar(a/10 + '0'); // a nqasmoha eala 10 donc atbqa matalan 9,7
            ft_putchar(a%10 + '0'); // HNA ANPRINTIW DIK LBAQI LIA HIA 7 
            ft_putchar(' ');
            ft_putchar(b/10 + '0'); // NEFS LHAJA
            ft_putchar(b%10 + '0');
            if(!(a==98 && b == 99))
                write(1,", ",2);
            b++;
            }
        a++;
        }
}    
