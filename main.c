/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:03:47 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/20 18:09:00 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	main(void)
{
	int i;
	int mine;
  
  i = isalnum ('-');
  mine = ft_isalnum ('-');
  printf ("Original  %d. Mine  %d.\n",i,mine);
	return (0);
}