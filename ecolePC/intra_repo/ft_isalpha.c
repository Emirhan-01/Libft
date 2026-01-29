/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:21:35 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 19:53:31 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(char c)
{
	while (c != '\0')
	{
		if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
			return (1);
	}
	return (0);
}

int	main(void)
{
	printf("---> %d <---\n", ft_isalpha('x'));
	return (0);
}
