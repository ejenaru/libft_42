/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:18:28 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/11/13 20:07:26 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstcpy;
	unsigned char	*srccpy;

	i = len;
	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	if (src < dst)
	{
		while (i-- > 0)
			dstcpy[i] = srccpy[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
