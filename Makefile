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
.PHONY: all clean fclean re

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_printf.c	\
		print_char.c	\
		print_string.c	\
		print_numb.c	\
		print_uns_numb.c	\
		print_hex.c	\
		print_adress.c	\
		ft_putnbr_base.c

HEADER = libftprintf.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): $(HEADER)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFTDIR)/$(LIBFTNAME):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(LIBFTDIR)/$(LIBFTNAME) $(OBJS)
	 cp $(LIBFTDIR)/$(LIBFTNAME) $(NAME) 
	 ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

