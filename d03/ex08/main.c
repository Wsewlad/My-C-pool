#include <stdlib.h>
int     ft_atoi(char *str);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_putchar(char c);

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_putstr("argv[1] = ");
        ft_putstr(argv[1]);
        ft_putstr("\natoi (stdlib.h) = ");
        ft_putnbr(atoi(argv[1]));
        ft_putstr("\nft_atoi (my) = ");
        ft_putnbr(ft_atoi(argv[1]));
        ft_putchar('\n');
    }
    else
        return (1);
    return (0);
}
