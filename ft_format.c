/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:34 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:42:08 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
			count += ft_sort_c(args);
	else if (format[i] == 's')
			count += ft_sort_s(args);
	else if (format[i] == 'p')
			count += ft_sort_p(args);
	else if (format[i] == 'd' || format[i] == 'i')
			count += ft_sort_di(args);
	else if (format[i] == 'u')
			count += ft_sort_u(args);
	else if (format[i] == 'x')
			count += ft_sort_x(args);
	else if (format[i] == 'X')
			count += ft_sort_upperx(args);
	else if (format[i] == '%')
			count += ft_sort_percent();
	return (count);
}
