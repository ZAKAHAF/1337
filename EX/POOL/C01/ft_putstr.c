void ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_putstr(char *str)
{
    int i; // declaration de i
    i = 0; 
    while(str[i] != '\0') // if string i different de /0 manipuler
    {
        ft_putchar(str[i]); // printi lina
        i++;
    }
}      
int main()
{
    ft_putstr("l3war");
}