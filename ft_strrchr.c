/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcronin <jcronin@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:22:28 by jcronin           #+#    #+#             */
/*   Updated: 2025/10/08 14:44:00 by jcronin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c) {
  size_t i;
  i = ft_strlen(s);
  if (!(char)c)
    return (char *)s + i;
  while (i-- > 0)
    if (s[i] == (char)c)
      return ((char *)&s[i]);
  return (NULL);
}

// #include <stdio.h>
// int main() {
//   char *s = "test abcd";
//   char *b = ft_strrchr(s, '1');
//   (void)b;
//   // printf("%s\n", b);
//   return 0;
// }
