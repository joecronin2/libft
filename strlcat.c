/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:44:55 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 14:33:29 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns len of string tried to create
// appends null terminated string to end of dst
// size is full buffer size
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen, i;
	dstlen = ft_strlen(dst);
	i = 0;
	while (src[i] && (dstlen + i) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	while (src[i])
		i++;
	return (dstlen + i);
}
