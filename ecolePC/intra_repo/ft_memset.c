/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:39:25 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 14:17:13 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (n > 0)
	{
		*x = (unsigned char)c;
		n--;
	}
	return (s);
}
