/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 10:35:11 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 13:51:45 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putmint(char *min_int)
{
	int		i;

	i = 0;
	ft_putchar(45);
	while (min_int[i] != '\0')
	{
		ft_putchar(min_int[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 1;
	if (nb == -2147483648)
		ft_putmint("2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar(45);
			nb *= -1;
		}
		while (nb / i > 9)
		{
			i *= 10;
		}
		while (i != 0)
		{
			ft_putchar(nb / i + 48);
			nb %= i;
			i /= 10;
		}
		ft_putchar('\n');
	}
}
