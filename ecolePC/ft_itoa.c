/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:08:48 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 17:22:48 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count(long n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;
	long	num;

	num = n;
	len = count(num);
	c = malloc(len + 1);
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (num == 0)
		c[0] = 48;
	if (num < 0)
	{
		c[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		c[--len] = (num % 10) + 48;
		num /= 10;
	}
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("---> %s\n",ft_itoa(-3456));
	return (0);
}
*/