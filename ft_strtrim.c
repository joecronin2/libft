/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:54:55 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 17:07:03 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*s = (const char *)set;
	size_t		i;
	size_t		start;
	size_t		len;
	char		*b;

	i = 0;
	while (is_in_set(s[i], set))
		i++;
	start = i;
	while (!is_in_set(s[i], set))
		i++;
	len = i - start;
	b = malloc(len + 1);
	i = 0;
	while (i < len)
	{
		b[i] = s[start + i];
		i++;
	}
	return (b);
}
