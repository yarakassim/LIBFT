# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 12:09:43 by ykassim-          #+#    #+#              #
#    Updated: 2021/05/30 16:14:11 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c \
	  ft_memchr.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isascii.c \
	  ft_memcmp.c \
	  ft_strdup.c \
	  ft_strnstr.c \
	  ft_bzero.c \
	  ft_isdigit.c \
	  ft_memcpy.c \
	  ft_strlcat.c \
	  ft_strrchr.c \
	  ft_calloc.c \
	  ft_isprint.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_tolower.c \
	  ft_isalnum.c \
	  ft_memccpy.c \
	  ft_memset.c \
	  ft_strlen.c \
	  ft_toupper.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf *.o $(OBJ)

fclean

re
