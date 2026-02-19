/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:00:20 by embostan          #+#    #+#             */
/*   Updated: 2026/02/16 14:08:04 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	unsigned char	d;

	x = (unsigned char *)s;
	d = (unsigned char)c;
	while (n > 0)
	{
		if (*x == d)
			return ((void *)x);
		x++;
		n--;
	}
	return (NULL);
}
