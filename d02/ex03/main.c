void	ft_is_negative(int n);
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('-');
	ft_putchar(53);
	ft_putchar('\t');
	ft_is_negative(-5);
	ft_putchar('\n');
	ft_putchar(48);
	ft_putchar('\t');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_putchar(53);
	ft_putchar('\t');
	ft_is_negative(5);
	ft_putchar('\n');
	return (0);
}
