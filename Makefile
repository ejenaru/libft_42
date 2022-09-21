# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 11:06:58 by idiaz-fo          #+#    #+#              #
#    Updated: 2022/09/21 16:45:49 by idiaz-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a 

HEADER = libft.h 

SRCS = 	ft_atoi.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c

OBJ = $(SRCS:.c=.o) 


#########################################

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
	
$(OBJ):$(SRCS)
	$(CC) $(CFLAGS) -c -I $(HEADER) $(SRCS)

clean:
	rm -rf $(OBJ) libft.so

fclean:
	rm -rf $(NAME) libft.so
	
re: fclean all


.PHONY: clean fclean re 
