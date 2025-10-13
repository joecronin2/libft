/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:08:40 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 16:13:52 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*m;
	size_t	product;

	product = nmemb * size;
	if (product == 0)
		return (malloc(1));
	if (size != 0 && nmemb > ((size_t)0 - 1) / size)
		return (NULL);
	m = malloc(product);
	ft_bzero(m, product);
	return (m);
}
