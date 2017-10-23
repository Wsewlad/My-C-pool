int     ft_atoi(char *str);
int     ft_fibonacci(int index);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Please, type in some index of fibonacci sequance like program argument\n");
        return (1);
    }
    else
    {
        ft_putstr("Your index is: ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putstr("\nYou number is: ");
        ft_putnbr(ft_fibonacci(ft_atoi(argv[1])));
        ft_putchar('\n');
    }
    return (0);
}
