/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns_numb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:55:30 by jomatic           #+#    #+#             */
/*   Updated: 2026/05/29 16:55:59 by jomatic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	print_uns_numb(unsigned int numb)
{
	int	len;

	len = ft_putnbr_base(numb, "0123456789");
	return (len);
}
