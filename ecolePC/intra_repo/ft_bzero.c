/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:15:37 by embostan          #+#    #+#             */
/*   Updated: 2026/01/29 14:59:33 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (n > 0)
	{
		*c++ = '\0';
		n--;
	}
}
