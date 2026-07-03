/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:36:42 by jomatic           #+#    #+#             */
/*   Updated: 2026/07/03 17:36:45 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (nbr >= (unsigned long)base_len)
		len += ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
	return (len + 1);
}
