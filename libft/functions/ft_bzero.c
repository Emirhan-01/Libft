/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embostan <embostan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:20:00 by embostan          #+#    #+#             */
/*   Updated: 2026/01/25 17:58:22 by embostan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_bzero(void *s, unsigned int n)
{
	unsigned char	*p;

	*p = s;
	while(n--)
	{
		*p++ = '0';
	}
	return (s);
}


//
//
//	int	i = -1;
//	while (++i < 10) önce i değerini arttırır ondan sonra 10 değerinden küçük mü diye kontrol eder
//	{
//
//	}
//
//
//
//
//
//
