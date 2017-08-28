/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:47:57 by vfil              #+#    #+#             */
/*   Updated: 2017/08/02 18:00:36 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j])
			{
				ft_putchar(argv[argc - 1][j]);
				j++;
			}
			ft_putchar('\n');
			argc--;
		}
	}
	return (0);
}
