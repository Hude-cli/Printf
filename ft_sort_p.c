/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:25:00 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/16 16:39:04 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_sort_p(va_list args)
{
	int				count;
	unsigned long	hexa;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	hexa = va_arg(args, unsigned long);
	count += ft_count_hexa(hexa);
	ft_put_hexa(hexa, 1, ft_tolower);
	return (count);
}
