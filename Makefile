# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/29 15:01:16 by jomatic           #+#    #+#              #
#    Updated: 2026/05/29 15:04:27 by jomatic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(LIBFTDIR)
LIBFTDIR = ./libft

SRCS = 	ft_printf.c	\
		print_char.c	\
		print_string.c	\
		print_numb.c	\
		print_uns_numb.c	\
		print_hex.c	\
		print_adress.c	\
		ft_putnbr_base.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

re: fclean all

