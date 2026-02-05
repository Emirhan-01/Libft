/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:11:44 by embostan          #+#    #+#             */
/*   Updated: 2026/01/29 14:48:10 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

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
