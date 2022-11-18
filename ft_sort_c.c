/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:53 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:21 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_c(va_list args)
{
	int	count;

	count = 0;
	count += 1;
	ft_putchar_fd(va_arg(args, int), 1);
	return (count);
}
