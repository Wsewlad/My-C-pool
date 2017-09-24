int     ft_strlen(char *str);
void    ft_putnbr(int nb);
void    ft_putchar(char c);

int     main(void)
{
    char s[] = "olololo";
    ft_putnbr(ft_strlen(s));
    ft_putchar('\n');
    return (0);
}
