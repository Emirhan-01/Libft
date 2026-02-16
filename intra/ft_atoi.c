/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:59:15 by embostan          #+#    #+#             */
/*   Updated: 2026/02/16 12:50:06 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			x *= -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		i = (i * 10) + (*nptr - 48);
		nptr++;
	}
	return (i * x);
}
