# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 14:57:19 by albaud            #+#    #+#              #
#    Updated: 2022/11/01 23:58:04 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sed
MAIN 		= main.cpp
CC			= c++
CFLAGS		= -Wall -Wextra -Werror
COMPIL		= -std=c++98

.c.o 	:
		${CC} ${CFLAGS} -I /usr/X11/include -c $< -o ${<:.c=.o}

all		: ${NAME}

$(NAME)	:
		${CC} ${CFLAGS} -o ${NAME} ${MAIN}

compile	:
		${CC} ${CFLAGS} ${COMPIL} -o ${NAME} ${MAIN} 

clean	:
		rm -f ${OBJS}
fclean	:	clean
		rm -f ${NAME} 
re:		fclean all

lclean	: fclean
		rm -f ${LIB}
relib	: lclean all