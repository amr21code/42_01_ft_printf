/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:51:34 by anruland         #+#    #+#             */
/*   Updated: 2022/03/22 10:15:30 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);

void	ft_putnbr_ulong_fd_base(unsigned long nb, int fd, int base, int up);

int		ft_hexlen(unsigned long nb);

int		ft_count_args_printf(const char *format);

size_t	ft_nbrlen(long long nbr, int sign, int base);

int		ft_printf_strlen(char *str);

#endif