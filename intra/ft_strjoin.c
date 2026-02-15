/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:05:12 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:13:50 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*add;
	char	*c;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	c = malloc(s1_len + s2_len + 1);
	if (!c)
		return (NULL);
	add = c;
	while (*s1)
		*add++ = *s1++;
	while (*s2)
		*add++ = *s2++;
	*add = '\0';
	return (c);
}
