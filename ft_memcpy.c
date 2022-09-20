/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:49:39 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/09/20 18:47:26 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_cp;
	unsigned char	*src_cp;

	dst_cp = (unsigned char *)dst;
	src_cp = (unsigned char *)src;
	i = 0;
	if (!dst)
		return (dst);
	while (i < n)
	{
		dst_cp[i] = src_cp[i];
		i++;
	}
	return (dst);
}
