/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:55:39 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 15:56:11 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}

// If little is an empty string, big is returned;
// if little occurs nowhere in big,
//	NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	found;
	size_t	little_len;

	if (!*little)
		return ((char *)big);
	little_len = ft_strnlen(little, len);
	i = 0;
	while (i <= len - little_len)
	{
		if (big[i] == little[0])
			if (ft_strncmp(big, little, little_len))
				return ((char *)big);
		big++;
		i++;
	}
	return (0);
}
