/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:12:11 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:13:12 by embostan         ###   ########.fr       */
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
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Emirhan";

	printf("---> %p\n\n", &s[0]);
	printf("---> %p\n", ft_strdup(s));
}*/
