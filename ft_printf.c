/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 14:00:30 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:43:23 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_args(const char *input, void *args)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += print_char((int)args);
	else if (input = 's')
		i += print_string((char *)args);
	else if (input = 'p')
		i += print_adress(args);
	else if (input = 'd')
		i += print_numb((int)args);
	else if (input = 'i')
		i += print_uns_numb((int)args);
	else if (input = 'u')
		i += print_numb((unsigned int)args);
	else if (input = 'x')
		i += print_hex((int)args);
	else if (input = 'X')
		i += print_hex((int)args);
	return (i);
}
int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input = '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				i += check_arg(*input, va_args(args, void *));
			else if (*input == '%')
				i += print_char(input, 1);
		}
		else
			i += print_char(input, 1);
		input++;
	}
	return (i);
}
