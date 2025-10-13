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

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	product = nmemb * size;
	if (product == 0 || product % nmemb != 0)
		return (NULL);
	m = malloc(nmemb * size);
	ft_bzero(m, product);
	return (m);
}
