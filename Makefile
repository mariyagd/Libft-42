# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdanchev <mdanchev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 12:21:59 by mdanchev          #+#    #+#              #
#    Updated: 2022/10/17 17:33:56 by mdanchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c ft_memmove.c ft_memchr.c \
	   ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	   ft_strnstr.c ft_strncmp.c ft_toupper.c ft_tolower.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strmapi.c 

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror 

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re