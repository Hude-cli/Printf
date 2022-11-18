/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:26 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:28:54 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hexa(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}
