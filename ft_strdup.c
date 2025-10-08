/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:14:04 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 16:41:04 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*b;
	size_t	i;

	len = ft_strlen(s);
	b = malloc(len + 1);
	i = 0;
	while (i < len)
	{
		b[i] = s[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
