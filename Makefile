# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 15:12:32 by ade-garr          #+#    #+#              #
#    Updated: 2022/01/04 14:34:53 by adegarr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/ft_atoi.c
SRCS += srcs/ft_bzero.c
SRCS += srcs/ft_calloc.c
SRCS += srcs/ft_isalnum.c
SRCS += srcs/ft_isalpha.c
SRCS += srcs/ft_isascii.c
SRCS += srcs/ft_isdigit.c
SRCS += srcs/ft_isprint.c
SRCS += srcs/ft_itoa.c
SRCS += srcs/ft_memccpy.c
SRCS += srcs/ft_memchr.c
SRCS += srcs/ft_memcmp.c
SRCS += srcs/ft_memcpy.c
SRCS += srcs/ft_memmove.c
SRCS += srcs/ft_memset.c
SRCS += srcs/ft_putchar_fd.c
SRCS += srcs/ft_putendl_fd.c
SRCS += srcs/ft_putnbr_fd.c
SRCS += srcs/ft_putstr_fd.c
SRCS += srcs/ft_split.c
SRCS += srcs/ft_strchr.c
SRCS += srcs/ft_strdup.c
SRCS += srcs/ft_strjoin.c
SRCS += srcs/ft_strlcat.c
SRCS += srcs/ft_strlcpy.c
SRCS += srcs/ft_strlen.c
SRCS += srcs/ft_strmapi.c
SRCS += srcs/ft_strncmp.c
SRCS += srcs/ft_strnstr.c
SRCS += srcs/ft_strrchr.c
SRCS += srcs/ft_strtrim.c
SRCS += srcs/ft_substr.c
SRCS += srcs/ft_tolower.c
SRCS += srcs/ft_toupper.c

SRCS2 += srcs/ft_lstadd_back.c
SRCS2 += srcs/ft_lstadd_front.c
SRCS2 += srcs/ft_lstclear.c
SRCS2 += srcs/ft_lstdelone.c
SRCS2 += srcs/ft_lstiter.c
SRCS2 += srcs/ft_lstlast.c
SRCS2 += srcs/ft_lstmap.c
SRCS2 += srcs/ft_lstnew.c
SRCS2 += srcs/ft_lstsize.c

OBJS	= ${SRCS:.c=.o}

OBJS2	= ${SRCS2:.c=.o}

NAME	= libft.a

INCLUDES = includes/

CC		= clang

CFLAGS	+= -Wall
CFLAGS	+= -Wextra
CFLAGS	+= -Werror

HEADER = ${INCLUDES}libft.h

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs $@ $^
			printf "\033[32m$@ is ready ! \n\033[0m"

bonus:		${OBJS} ${OBJS2}
			ar rcs ${NAME} $^
			printf "\033[32m${NAME} $@ is ready ! \n\033[0m"

${OBJS}: %.o: %.c ${HEADER}
			${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@
	
${OBJS2}: %.o: %.c ${HEADER}
			${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o $@
			
clean:
			${RM} ${OBJS} ${OBJS2}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
.SILENT:
