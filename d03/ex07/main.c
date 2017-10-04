char    *ft_strrev(char *str);
void    ft_putstr(char *str);

int     main(void)
{
    char    str[] = "\nHello, World!!!\n";
    ft_putstr(str);
    ft_putstr(ft_strrev(str));
    return (0);
}
