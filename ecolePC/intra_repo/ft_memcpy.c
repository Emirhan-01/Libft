/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:37:48 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 14:15:46 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	d[] = "emrihan";
	char	s[20] = "bostan";

	ft_memcpy(d, s, 3);
	printf("---> %s\n", d);
	return (0);
}*/
