/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:15:57 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 13:15:41 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (little[i] == '\0')
		return (char *)big;
	while (big[i] != '\0' || !(i < len))
	{
		while (big[i + x] == little[x])
		{
			x++;
			if (little[x] == '\0')
				return (char *)big;
		}
		x = 0;
		i++;
	}
	return (0);
}
