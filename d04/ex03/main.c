int     ft_atoi(char *str);
int     ft_recursive_power(int nb, int power);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);

int     main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putstr("Please, type in two numbers like program arguments ([number][power])\n");
        return (1);
    }
    else
    {
        ft_putstr("Your number and power are: ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putchar('\t');
        ft_putnbr(ft_atoi(argv[2]));
        ft_putstr("\nYour result is: ");
        ft_putnbr(ft_recursive_power(ft_atoi(argv[1]), ft_atoi(argv[2])));
        ft_putchar('\n');
    }
    return (0);
}
