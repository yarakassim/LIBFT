# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/27 12:09:43 by ykassim-          #+#    #+#              #
#    Updated: 2021/06/02 15:36:01 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

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
	  ft_toupper.c \
	  ft_substr.c \
	  ft_strjoin.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
