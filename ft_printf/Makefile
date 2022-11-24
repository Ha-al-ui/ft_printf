# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halaoui <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 03:13:56 by halaoui           #+#    #+#              #
#    Updated: 2022/11/24 03:13:59 by halaoui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_printf.c \
		ft_hexa.c \
		ft_putcharcount.c \
		ft_putnbrcount.c \
		ft_putstrcount.c \
		ft_putunsigned.c \

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs  $(NAME) $(OBJS)
%o: %c ft_printf.h
	$(CC) $(CFLAGS) -c $< 


clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus
