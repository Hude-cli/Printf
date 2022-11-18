/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:25:18 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/16 16:36:02 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_sort_x(va_list args)
{
	int				count;
	unsigned long	x;

	count = 0;
	x = va_arg(args, unsigned int);
	count += ft_count_hexa(x);
	ft_put_hexa(x, 1, ft_tolower);
	return (count);
}
