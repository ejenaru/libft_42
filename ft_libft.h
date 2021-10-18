/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:53:13 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/10/18 23:20:27 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
#include <stdio.h>
#include <ctype.h>

int				ft_atoi(char *str);
size_t			strlen(const char *s);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);


#endif
