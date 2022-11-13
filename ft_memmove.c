/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:18:28 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/11/13 18:45:21 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dstcpy;
	char		*srccpy;

	dstcpy = (char *)dst;
	srccpy = (char *)src;
	i = 0;
	if(dst == 0 && src == 0)
		return (dst);
	while (i < len)
	{
		if(dst == &dstcpy[i + 1])
			return (dst);
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dst);
}
