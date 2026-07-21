#include<stdio.h>
int ft_strlen(char *str)
{
    int i ;
    i = 0 ;
    while(str[i] != '\0')
    {
       i++;
    }
    return(i);
}
int main()
{
    int len;
    len = ft_strlen("k7al terma");
    printf("%d",len);
}    