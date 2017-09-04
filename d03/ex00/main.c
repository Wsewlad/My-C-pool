void	ft_putnbr(int nb);
void	ft_ft(int *nbr);
void	ft_putchar(char c);

int	main(void)
{
	int *nb;
	int n;
	
	n = -41;
	nb = &n;
	ft_putnbr(*nb);
	ft_putchar('\n');
	ft_ft(nb);
	ft_putnbr(*nb);
	ft_putchar('\n');
	return (0);
}
