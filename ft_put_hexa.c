/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:46 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/16 16:54:54 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hexa(unsigned long num, char format, int (*f)(int))
{
	if (num == 0)
		write(1, "0", 1);
	else
	{
		if (num >= 16)
		{
			ft_put_hexa(num / 16, format, f);
			ft_put_hexa(num % 16, format, f);
		}
		else
		{
			if (num < 10)
				ft_putchar_fd((num + '0'), 1);
			else
			{
				ft_putchar_fd(f(num + 55), 1);
			}
		}
	}
}
