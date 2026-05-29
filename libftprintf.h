/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:02:14 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:55:13 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdargs.h>

int	ft_printf(const char *, ...);
int	print_char(int c);
int	print_string(char *str);
int	print_adress(void *ptr);
int	print_numb(int numb);
int	print_uns_numb(int	numb);
int	print_hex(int numb);

#endif
