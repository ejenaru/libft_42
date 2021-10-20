/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:36:29 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/20 20:34:42 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (size == 0)
		return (srcsize);
	i = 0;
	while (dest[i])
		i++;
	if (size <= i)
		return (srcsize + size);
	j = 0;
	while (j < (size - i - 1) && src[j] != 0 )
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (srcsize + i);
}
