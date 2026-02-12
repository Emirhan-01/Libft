/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:15:37 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:10:01 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (n > 0)
	{
		*c++ = '0';
		n--;
	}
}

/*#include <unistd.h>

int	main(void)
{
	char	c[] = "3456789";
	size_t	i = 5;
	int	x = 0;

	ft_bzero(c, i);
	while (x <= 7)
	{
		write(1, &c[x], 1);
		x++;
	}
	return (0);// a.out | cat -e ile çalıştır
}*/
