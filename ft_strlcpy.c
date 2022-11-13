/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:54:51 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/11/13 16:29:22 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize] != 0)
		srcsize++;
	if (dstsize != 0)
	{
		while (i < dstsize)
		{
			if (i == dstsize - 1)
				dst[i] = '\0';
			else
				dst[i] = src[i];
			i++;
		}
	}
	return (srcsize);
}
