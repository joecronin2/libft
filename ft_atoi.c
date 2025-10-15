/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:56:57 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 16:08:34 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *nptr)
{
	int	a;
	int	neg;

	while (ft_isspace(*nptr))
		nptr++;
	neg = 0;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			neg = 1;
		nptr++;
	}
	a = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		a *= 10;
		a += *nptr - '0';
		nptr++;
	}
	if (neg)
		return (-a);
	return (a);
}
