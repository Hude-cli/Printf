/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:25:07 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:55 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_s(va_list args)
{
	int		count;
	char	*string;

	count = 0;
	string = va_arg(args, char *);
	if (!string)
	{
		ft_putstr_fd("(null)", 1);
		count += 6;
	}
	else
	{
		count += ft_strlen(string);
		ft_putstr_fd(string, 1);
	}
	return (count);
}
