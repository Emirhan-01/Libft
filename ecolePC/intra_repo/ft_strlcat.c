/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:54:38 by embostan          #+#    #+#             */
/*   Updated: 2026/01/27 18:51:06 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (dlen >= size)
		return (size + slen);
	while (src[i] && (dlen + i + 1) <= size)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

int	main(void)
{
	char *d = "Emirhan";
	char *s = "Bostan";

	printf("---> %zu\n", ft_strlcat(d, s, 4));
	return (0);
}
