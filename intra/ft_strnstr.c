/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:15:57 by embostan          #+#    #+#             */
/*   Updated: 2026/02/15 16:47:50 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && (i < len))
	{
		x = 0;
		while ((big[i + x] == little[x]) && ((i + x) < len)
			&& (big[i + x] != '\0'))
		{
			x++;
			if (little[x] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
