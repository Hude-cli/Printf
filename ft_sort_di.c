/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:57 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:28 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_di(va_list args)
{
	int	count;
	int	decimal;

	count = 0;
	decimal = va_arg(args, int);
	count += ft_counter(decimal);
	ft_putnbr_fd(decimal, 1);
	return (count);
}
