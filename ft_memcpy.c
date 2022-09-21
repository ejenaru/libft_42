/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:49:39 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/09/21 21:34:08 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}
