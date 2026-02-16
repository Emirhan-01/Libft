/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:20:15 by embostan          #+#    #+#             */
/*   Updated: 2026/02/16 17:03:43 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_counter(const char *s, char c, char **result, int mode)
{
	size_t	i;
	size_t	word;

	if (mode == 1)
	{
		i = 0;
		word = 0;
		while (s[i])
		{
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				word++;
			i++;
		}
		return (word);
	}
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	return (0);
}

static char	**fill(char **result, const char *s, char c)
{
	size_t	i;
	size_t	st;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			st = 0;
			while (s[st] && s[st] != c)
				st++;
			result[i++] = ft_substr(s, 0, st);
			if (!result[i - 1])
			{
				word_counter(NULL, 0, result, 0);
				return (NULL);
			}
			s += st;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (word_counter(s, c, NULL, 1) + 1));
	if (!result)
		return (NULL);
	return (fill(result, s, c));
}
