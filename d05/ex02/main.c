#include <stdlib.h>
int     ft_atoi(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Please, add some test-number like program argument.\n");
        return (1);
    }
    else
    {
        ft_putstr("Your number is: ");
        ft_putstr(argv[1]);
        ft_putstr("\natoi: ");
        ft_putnbr(atoi(argv[1]));
        ft_putstr("\nft_atoi: ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putchar('\n');
    }
    return (0);
}
