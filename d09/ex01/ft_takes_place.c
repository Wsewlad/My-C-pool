/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:51:28 by vfil              #+#    #+#             */
/*   Updated: 2017/08/03 19:29:28 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*find_format(int hour)
{
	if (hour >= 12 && hour < 24)
		return ("P.M.");
	else
		return ("A.M.");
}

void	ft_takes_place(int hour)
{
	float	hour1;
	float	hour2;
	char	*form1;
	char	*form2;

	hour1 = hour % 12;
	hour2 = (hour + 1) % 12;
	if (hour1 == 0.00)
		hour1 = 12.00;
	if (hour2 == 0.00)
		hour2 = 12.00;
	form1 = find_format(hour);
	form2 = find_format(hour + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%.2f %s AND %.2f %s\n", hour1, form1, hour2, form2);
}
