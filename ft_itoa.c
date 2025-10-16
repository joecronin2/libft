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

static char	*rev_str(const char *src, int len)
{
	int		i;
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (len > 0)
		str[i++] = src[--len];
	return (str);
}

char	*ft_itoa(int n)
{
	char			buf[16];
	char			*c;
	unsigned int	un;
	int				i;
	char			*res;

	i = 0;
	if (n < 0)
		un = -n;
	else
		un = n;
	if (un == 0)
		buf[i++] = '0';
	else
	{
		while (un)
		{
			buf[i++] = '0' + (un % 10);
			un /= 10;
		}
	}
	buf[i] = '\0';
	if (n < 0)
		buf[i++] = '-';
	return (rev_str(buf, i));
}
