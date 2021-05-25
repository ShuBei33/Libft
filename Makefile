# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/22 15:54:32 by estoffel          #+#    #+#              #
#    Updated: 2021/05/25 17:30:15 by estoffel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRC		=	\
			ft_atoi.c		ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
			ft_isdigit.c	ft_isprint.c	ft_strchr.c		ft_strlcat.c	\
			ft_strlcpy.c	ft_strlen.c		ft_strncmp.c	ft_strnstr.c	\
			ft_strrchr.c	ft_swap.c		ft_tolower.c	ft_toupper.c	\
			

OBJ		=	$(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
