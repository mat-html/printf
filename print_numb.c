/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:53:09 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:53:46 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_numb(int numb)
{
	int	len;

	len = 0;
	if (numb < 0)
	{
		write(1, "-", 1);
		len += 1;
		len += ft_putnbr_base((unsigned int)(- (long)numb), "0123456789");
	}
	else
		len += ft_putnbr_base((unsigned int)numb, "0123456789");
	return (len);
}
