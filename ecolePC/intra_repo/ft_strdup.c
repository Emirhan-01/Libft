/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:12:11 by embostan          #+#    #+#             */
/*   Updated: 2026/01/29 15:36:11 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	i;

	i = ft_strlen(s);
	c = malloc(i + 1);
	if (!c)
		return (NULL);
	ft_memcpy(c, s, i + 1);
	return (c);
}
