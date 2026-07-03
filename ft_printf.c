/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:00:30 by jomatic           #+#    #+#             */
/*   Updated: 2026/07/03 17:36:05 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"
#include "libft/libft.h"

static int	check_args(char spec, va_list *args)
{
	int	i;

	i = 0;
	if (spec == 'c')
		i += print_char(va_arg(*args, int));
	else if (spec == 's')
		i += print_string(va_arg(*args, char *));
	else if (spec == 'p')
		i += print_adress(va_arg(*args, void *));
	else if (spec == 'd' || spec == 'i')
		i += print_numb(va_arg(*args, int));
	else if (spec == 'u')
		i += print_uns_numb(va_arg(*args, unsigned int));
	else if (spec == 'x' || spec == 'X')
		i += print_hex(va_arg(*args, unsigned int), spec);
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (*input == '\0')
				break ;
			if (*input == '%')
				i += print_char('%');
			else if (ft_strchr("cspdiuxX", *input))
				i += check_args(*input, &args);
		}
		else
			i += print_char(*input);
		input++;
	}
	va_end(args);
	return (i);
}
