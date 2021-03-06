/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:18:28 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/20 20:35:44 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	return ((void *)((int)dst + (int)src + len));
}
