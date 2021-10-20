/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:52:03 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/20 23:16:59 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../ft_libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	size_t			i;
	unsigned char	*s_cp;
	
	i = 0;
	d = (unsigned char)c;
	s_cp = (unsigned char*)s;
	while (i< n)
	{
		if (s_cp[i] == d)
		{
			
		}
		i++;
	}
	return NULL;
}