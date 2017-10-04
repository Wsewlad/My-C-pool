void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int i;
	long int nbl;
	
	i = 1;
	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar(45);
		nbl *= -1;
	}
	while (nbl / i > 9)
		i *= 10;
	while (i != 0)
	{
		ft_putchar(nbl / i + 48);
		nbl %= i;
		i /= 10;
	}
}
