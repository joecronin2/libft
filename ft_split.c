/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:11:00 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 17:28:10 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	chars_until(const char *str, char sep, int skip_in_charset)
{
	int	count;

	count = 0;
	while (str[count] && (str[count] == sep) != skip_in_charset)
		count++;
	return (count);
}

size_t	count_strs(const char *str, char sep)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		i += chars_until(&str[i], sep, 0);
		if (!str[i])
			return (count);
		i += chars_until(&str[i], sep, 1);
		count++;
	}
	return (count);
}

char	*ft_strndup(const char *str, size_t n)
{
	char	*s;
	size_t	i;

	s = malloc(n + 1);
	i = 0;
	while (*str && (i < n))
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		cur_len;
	int		strs;

	strs = count_strs(s, c);
	arr = malloc((strs + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (s[i])
	{
		i += chars_until(&s[i], c, 0);
		cur_len = chars_until(&s[i], c, 1);
		if (cur_len == 0)
			break ;
		arr[j] = ft_strndup(&s[i], cur_len);
		i += cur_len;
		j++;
	}
	arr[j] = 0;
	return (arr);
}
