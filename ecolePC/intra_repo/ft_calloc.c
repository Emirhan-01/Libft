/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:11:44 by embostan          #+#    #+#             */
/*   Updated: 2026/02/13 00:26:42 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (!nmemb && !size)
		return (NULL);
	s = malloc(nmemb * size);
	ft_bzero(s, (nmemb * size));
	return (s);
}

/*#include <stdio.h>

int	main(void)
{
	void	*c = ft_calloc(2, 1);
	printf("---> %s\n", (char *)c);
	free (c);
	return (0);
}*/
