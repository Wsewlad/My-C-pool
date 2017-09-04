void	ft_putnbr(int nb);
void	ft_ultimate_ft(int *********nbr);
void	ft_putchar(char c);
void	print_it(int *********nb9);

int	main(void)
{
	int *nb;
	int **nb2;
	int ***nb3;
	int ****nb4;
	int *****nb5;
	int ******nb6;
	int *******nb7;
	int ********nb8;
	int *********nb9;
	int n;
	
	n = -41;
	nb = &n;
	nb2 = &nb;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nb9 = &nb8;
	print_it(nb9);
	return (0);
}

void	print_it(int *********nb9)
{
	ft_putnbr(*********nb9);
        ft_putchar('\n');
        ft_ultimate_ft(nb9);
        ft_putnbr(*********nb9);
        ft_putchar('\n');
}
