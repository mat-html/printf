/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:53:54 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:56:21 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_hex(unsigned int numb, char spec)
{
	int	len;

	if (spec == 'X')
		len = ft_putnbr_base(numb, "0123456789ABCDEF");
	else
		len = ft_putnbr_base(numb, "0123456789abcdef");
	return (len);
}
