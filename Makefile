# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/07 11:06:58 by idiaz-fo          #+#    #+#              #
#    Updated: 2021/10/20 18:52:28 by idiaz-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC_DIR = ./src/

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
		ft_memcpy.c

OBJ = $(SRCS:.c=.o) 

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) -c -I $(HEADER) $(addprefix $(SRC_DIR),$(SRCS))
	ar rcs $(NAME) $(OBJ) 

main: main.c $(NAME)
	$(CC) $(FLAGS) main.c $(NAME) -o main.out && ./main.out
	rm -rf main.o main.out

clean:
	rm -rf $(OBJ) libft.so

fclean:
	rm -rf $(NAME) libft.so
	
re: fclean all

so: #ppara linux
	$(CC) -nostartfiles -fPIC $(FLAGS) $(addprefix $(SRC_DIR),$(SRCS))
	gcc -nostartfiles -shared -o libft.so $(OBJ)


.PHONY: clean fclean re 
