/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:59:15 by embostan          #+#    #+#             */
/*   Updated: 2026/01/27 19:04:27 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			x *= -1;
		nptr++;
	}
	while ((*nptr >= 48) && (*nptr <= 57))
	{
		i = i * 10 + (*nptr - 48);
		nptr++;
	}
	return (i *= x);
}

int	main(int ac, char **av)
{
	if (ac >= 1 && ac <= 3)
		printf("---> %d <---\n", ft_atoi(&av[1][0]));
	return (0);
}
