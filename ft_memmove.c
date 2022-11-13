/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:18:28 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/11/13 19:36:55 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstcpy;
	unsigned char		*srccpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	i = len;
	if(dst == 0 && src == 0)
		return (dst);
	while (i-- > 0)
	{
		dstcpy[i] = srccpy[i];
	}
	return (dst);
}
