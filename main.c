/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:03:47 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/18 22:26:50 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	main(void)
{
	int i;
	int mine;
  
  i = isalpha ('6');
  mine = ft_isalpha ('6');
  printf ("Original  %d. Mine  %d.\n",i,mine);
	return (0);
}