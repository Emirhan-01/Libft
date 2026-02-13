/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:15:57 by embostan          #+#    #+#             */
/*   Updated: 2026/02/12 23:46:39 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] || (i < len))
	{
		while (big[i + x] && little[x]
			&& (big[i + x] == little[x]) && (i + x) < len)
		{
			x++;
			if (little[x] == '\0')
				return ((char *)(big + i));
		}
		x = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	big[] = "Emirhan Bostan";
	char	little[] = "n Boscan";

	printf("---> %s\n", ft_strnstr(big, little ,14));
	return (0);
}*/
