/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:09:27 by embostan          #+#    #+#             */
/*   Updated: 2026/02/15 19:03:06 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	d;

	d = (unsigned char)c;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == d)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
