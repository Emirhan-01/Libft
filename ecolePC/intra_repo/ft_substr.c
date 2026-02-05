/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:22:50 by embostan          #+#    #+#             */
/*   Updated: 2026/01/29 18:01:50 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;
	size_t	x;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (len > i - start)
		x = i - start;
	else
		x = len;
	c = malloc(x + 1);
	if (!c)
		return (NULL);
	ft_memcpy (c, s + start, x);
	c[x] = '\0';
	return (c);
}
