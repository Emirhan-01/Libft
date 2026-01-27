/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:38:51 by embostan          #+#    #+#             */
/*   Updated: 2026/01/27 18:39:00 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void *memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	int	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;

	if (!d && !s)
		return (NULL);
	while (d[i] && s[i])
	{
		if (d < s)
		{
			d[i] = s[i];
			i++;
		}
		if (d > s)
		{
			i = n;
			while (d[i] && s[i])
			{
				d[i - 1] = s[i - 1];
				i--;
			}
			d[i] = '\0';
		}
	}
	d[i] = '\0';
	return (dest);
}

