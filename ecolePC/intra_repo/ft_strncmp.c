/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:15:37 by embostan          #+#    #+#             */
/*   Updated: 2026/01/28 19:30:33 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < (n - 1)))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
