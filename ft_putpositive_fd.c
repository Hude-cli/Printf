/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpositive_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:49 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/11/14 17:29:32 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpositive_fd(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_putpositive_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
}
