/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:20:35 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/10 19:56:15 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*b;
	size_t	i;

	l = ft_strnlen((const char *)&s[start], len);
	b = malloc(l + 1);
	if (!b)
		return (0);
	i = 0;
	while (i < l)
	{
		b[i] = s[start + i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
