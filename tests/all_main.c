/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:00:08 by vfil              #+#    #+#             */
/*   Updated: 2017/08/08 17:31:23 by vfil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * gcc flags!!!
 */

gcc -Wall -Wextra -Werror -o

/***********************************/

/*
 * for ft_strstr.c
 */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[] = "hello world lol";
	char to_find[] = "";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}

/*******************************************************/

/*
 * for ft_str_is_alpha.c
 */

#include <stdio.h>

int		main(void)
{
	char str[] = "aASbcdefg";

	printf("%i\n", ft_str_is_alpha(str));
	return (0);
}

/************************************************/


/*
 * for ft_str_is_numeric.c
 */

#include <stdio.h>

int		main(void)
{
	char str[] = " 1234567890";

	printf("%i\n", ft_str_is_numeric(str));
	return (0);
}

/***********************************************/

/*
 * for ft_str_is_lowercase.c
 */

#include <stdio.h>

int		main(void)
{
	char str[] = "";

	printf("%i\n", ft_str_is_lowercase(str));\
	return (0);
}


/************************************************/

/*
 * for ft_str_is_uppercase.c
 */

#include <stdio.h>

int		main(void)
{
	char str[] = "&ABCDEFGHI";

	printf("%i\n", ft_str_is_uppercase(str));
	return (0);
}

/************************************************/

/*
 * for ft_str_is_printable.c
 */

#include <stdio.h>

int		main(void)
{
	char str[] = "\t";
	printf("%i\n", ft_str_is_printable(str));
	return (0);
}

/**********************************************/

/*
 * for ft_strcat.c
 */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[50] = "This is sourse";
	char dest[50] = "dest211111111111111111111111 ";
	char src2[50] = "This is sourse";
	char dest2[50] = "dest111111111111111111111111 ";

	printf("%s\n", ft_strcat(dest2, src2));
	printf("%s\n", strcat(dest, src));
	return (0);
}
/**************************************************/

/*
 * for ft_strncat.c
 */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[50] = "This is sourse";
	char dest[50] = "dest211111111111111111111111 ";
	char src2[50] = "This is sourse";
	char dest2[50] = "dest111111111111111111111111 ";

	printf("%s\n", ft_strncat(dest2, src2, 1));
	printf("%s\n", strncat(dest, src, 1));
	return (0);
}

/****************************************************/


/*
 * for ft_strdup
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	char	*src = "Hello UNIT!";
	char	*dest;

	dest = strdup(src);
	printf("%s\n", dest);
	return (0);
}

/*****************************************************/

/*
 * for *ft_range.c
 */

#include <stdlib.h>
#include <stdio.h>


int		main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 1;
	max = 1;
	range = ft_range(min, max);
	if (range == NULL)
		printf("dsfsdf");
	else
		while (*range)
		{
			printf("%i", *range);
			range++;
		}
	return (0);
}

/*******************************************************/


/*
 * for ft_ultimate_range.c
 */

#include <stdio.h>

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int size;

	min = 1;
	max = 10;
	size = ft_ultimate_range(&range, min, max);
	if (range == NULL)
		printf("dsfsdf");
	else
		while (*range)
		{
			printf("%i", *range);
			range++;
		}
	printf("\n %i", size);
	return (0);
}

/***********************************************/

#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;

	str = ft_concat_params(argc, argv);
	printf("%s\n", str);
	return (0);
}

/*********************************************************/


/*
 * for ft_split...
 */

nt		main(void)
{
	char	str[] = "123 456123 dffdk \n \t	Hello World here!\t\t\n lol!";
	int		i;
	char	**str2;

	printf("%i\n", find_words(str));

	str2 = ft_split_whitespases(str);
	i = 0;
	while (str2[i] != '\0')
	{
		printf("%s\n", str2[i]);
		i++;
	}
	return (0);
}

/******************************************************************/


/*
 * for ft_is_sort
 */

#include <stdio.h>


int		test(int n, int m)
{
		return (n - m);
}

int		main(void)
{
	int arr[] = {-6, -5, -4, -3, -3, -6};
	printf("%i\n", ft_is_sort(arr, 6, &test));
	return (0);
}

/******************************************************************/

/*
 * for ft_sort_wordtab.c
 */

#include <stdio.h>

int		main(void)
{
	char	**str;
	int		i;

	str[0] = "11007";
	str[1] = "11009";
	str[2] = "11003";
	str[3] = "21001";
	str[4] = "11000";
	str[5] = 0;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%s\n", str[i]);
		i++;
	}
	ft_sort_wordtab(str);
	printf("\n");
	i = 0;
	while (str[i] != '\0')
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}

/**************************************************/
