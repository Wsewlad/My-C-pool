void    ft_putnbr(int nb);
void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_atoi(char *str);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Please, type in some number like program argument\n");
        return (1);
    }
    else
    {
        ft_putstr("Your number is: ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putchar('\n');
    }
    return (0);
}
