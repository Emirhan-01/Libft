/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:08:48 by embostan          #+#    #+#             */
/*   Updated: 2026/02/01 16:54:54 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
		c[--len] = (num % 10) + 48;//son basamaktan başlayarak işlem yapılır
		num /= 10;//işlem yapılan sondaki basamak çöpe atılır
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	printf("---> %s\n",ft_itoa(-3456));
	return (0);
}
