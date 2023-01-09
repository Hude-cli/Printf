/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <hugde-cl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:43 by hugde-cl          #+#    #+#             */
/*   Updated: 2023/01/09 14:20:20 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
void			ft_putchar_fd(char c, int fd);
void			ft_put_hexa(unsigned long num, char format, int (*f)(int));
void			ft_putnbr_fd(int n, int fd);
void			ft_putpositive_fd(unsigned int n, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_counter(long nb);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_count_hexa(unsigned long nb);
int				ft_strlen(const char *str);
int				ft_sort_di(va_list args);
int				ft_sort_s(va_list args);
unsigned int	ft_sort_u(va_list args);
int				ft_sort_c(va_list args);
unsigned long	ft_sort_p(va_list args);
unsigned long	ft_sort_x(va_list args);
unsigned long	ft_sort_upperx(va_list args);
int				ft_format(const char *format, va_list args, int i);
int				ft_sort_percent(void);

#endif