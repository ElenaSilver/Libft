# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 21:47:23 by eserebry          #+#    #+#              #
#    Updated: 2017/04/29 20:38:12 by eserebry         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -c -I

SRC = ft_atoi.c ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
ft_itoa.c ft_bzero.c ft_lenght.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
ft_strcat.c ft_strequ.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
ft_strnequ.c ft_strjoin.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strclr.c \
ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strdel.c\
ft_strlen.c ft_strncat.c ft_strnew.c  ft_strncpy.c ft_strsplit.c ft_strstr.c \
ft_strnstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
ft_wordcount.c ft_wspace.c ft_swap.c ft_strrev.c ft_nextch.c ft_listaddend.c \

OBJ = $(SRC:.c=.o)

RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all