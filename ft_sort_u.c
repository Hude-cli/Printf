/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:25:11 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:31:03 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_sort_u(va_list args)
{
	int				count;
	unsigned int	u;

	count = 0;
	u = va_arg(args, unsigned int);
	count += ft_counter(u);
	ft_putpositive_fd(u, 1);
	return (count);
}
