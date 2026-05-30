/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:51:30 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:52:18 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	print_string(char *str)
{
	int	len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
