void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int n;
	int n2;
	int *a;
	int *b;

	n = 1;
	n2 = 2;
	a = &n;
	b = &n2;
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putnbr(*b);
	ft_swap(a, b);
	ft_putchar('\n');
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putnbr(*b);
	ft_putchar('\n');
	return (0);
}
