char    *ft_strrev(char *str);
void    ft_putstr(char *str);

int     main(void)
{
    char    str[] = "\nHello, World!!!";
    ft_putstr(ft_strrev(str));
    return (0);
}
