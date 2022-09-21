/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:54:06 by idiaz-fo          #+#    #+#             */
/*   Updated: 2022/09/21 21:27:49 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ft_libft.h"

int	ft_atoi(const char *str)
{
	long	numout;
	size_t	i;
	int		sign;

	sign = 1;
	numout = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		if (sign == 1 && numout >= 214748364 && str[i] > '7')
			return (-1);
		else if (sign == -1 && numout >= 214748364 && str[i] > '8')
			return (0);
		numout = (numout * 10) + (str[i] - '0');
		i++;
	}
	return (numout * sign);
}
