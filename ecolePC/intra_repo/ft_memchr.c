/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:00:20 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 19:31:31 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	if (c == '\0')
		return ((char *)(x + ft_strlen(s)));
	while (*x != '\0' && n > 0)
	{
		if (*x == c)
			return ((char *)x);
		s++;
		n--;
	}
	return (NULL);
}
