void ft_swap(int *a , int *b)
{
    int  tmp 
    tmp = *a ; // variable tmp khda la valeur li kyna f pointer a 
    *a = *b ; // a ayakhod la valeur dyl pointer b 
    *b = tmp ;//b ayakhode valeur dyl tmp 
    // a = 5 b = 10
    //implique que tmp = 5 a = 10 b = b = 5
}