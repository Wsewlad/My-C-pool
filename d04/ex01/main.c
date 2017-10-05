int     ft_recursive_factorial(int nb);
int     ft_atoi(char *str);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);
void    ft_putchar(char c);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Please, type in some number like program argument (0-12)\n");
        return (1);
    }
    else
    {
        ft_putstr("Your number is: ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putstr("\nYour factorial is: ");
        ft_putnbr(ft_recursive_factorial(ft_atoi(argv[1])));
        ft_putchar('\n');
    }
    return (0);
}
