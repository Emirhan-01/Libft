/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:11:44 by embostan          #+#    #+#             */
/*   Updated: 2026/02/17 15:24:18 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (nmemb == 0 && size == 0)//   || yap
		return (malloc(1));
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, (nmemb * size));
	return (s);
}
