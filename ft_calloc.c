/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:11:44 by embostan          #+#    #+#             */
/*   Updated: 2026/02/18 11:06:44 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (nmemb == 0 || size == 0 || (nmemb > SIZE_MAX / size))
		return (malloc(1));
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s, (nmemb * size));
	return (s);
}
