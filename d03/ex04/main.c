void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int n;
	int n2;
	int *a;
	int *b;

	n = 25;
	n2 = 5;
	a = &n;
	b = &n2;
	ft_putstr("a\tb\n");
	ft_putnbr(*a);
	ft_putchar('\t');
	ft_putnbr(*b);
	ft_putchar('\n');
	ft_putstr("--\t--\n");
	ft_ultimate_div_mod(a, b);
	ft_putstr("a/b\ta\%b\n");
	ft_putnbr(*a);
	ft_putchar('\t');
	ft_putnbr(*b);
	ft_putchar('\n');
	return (0);
}
