void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 25;
	b = 5;
	div = &a;
	mod = &b;
	ft_putstr("a\tb\n");
	ft_putnbr(a);
	ft_putchar('\t');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putstr("--\t--\n");
	ft_div_mod(a, b, div, mod);
	ft_putstr("a/b\ta\%b\n");
	ft_putnbr(*div);
	ft_putchar('\t');
	ft_putnbr(*mod);
	ft_putchar('\n');
	return (0);
}
