# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 14:24:57 by klafi             #+#    #+#              #
#    Updated: 2025/12/19 19:01:52 by klafi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJS = ft_isascii.c ft_isprint.c ft_isdigit.c

all : $(NAME)
libft.a:
	ar rcs libft.a *c
	


