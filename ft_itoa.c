/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:06:06 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/09 15:15:59 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	reverse_string(char *l, int len)
{
	char	*r;
	char	tmp;

	r = l + len;
	while (l < r)
	{
		tmp = *r;
		*r = *l;
		*l = tmp;
		l++;
		r--;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*c;
	unsigned int	un;

	if (n < 0)
		un = -n;
	else
		un = n;
	str = malloc(16);
	if (!str)
		return (NULL);
	c = str;
	if (un == 0)
		*c++ = '0';
	else
	{
		while (un)
		{
			*c++ = '0' + (un % 10);
			un /= 10;
		}
	}
	if (n < 0)
		*c++ = '-';
	*c-- = '\0';
	reverse_string(str, c - str);
	return (str);
}
