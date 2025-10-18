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

static int	is_in_set(char c, const char *set)
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
	size_t	i;
	size_t	start;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	start = i;
	while (s1[i] && !is_in_set(s1[i], set))
		i++;
	return (ft_substr(s1, start, i - start));
}

// #include <stdio.h>
//
// int main()
// {
// 	printf("%s\n", ft_strtrim("../././.hallo123.//././/.", "./"));
// 	printf("%s\n", ft_strtrim("..", "./"));
// 	printf("%s\n", ft_strtrim("hallo", "./"));
// 	return (0);
// }
