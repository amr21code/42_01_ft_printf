/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amr21code <a@n.de>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:33:51 by amr21code         #+#    #+#             */
/*   Updated: 2022/02/18 08:34:19 by amr21code        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_args_printf(const char *format)
{
	int		i;
	int		count;
	int		len;
	char	*ptr;

	i = 0;
	count = 0;
	len = ft_strlen((char *)format);
	while (i < len)
	{
		if (format[i] == '%')
		{
			i++;
			ptr = ft_strchr("cspdiuxX%", format[i]);
			if (ptr)
				count++;
		}
		ptr = NULL;
		i++;
	}
	return (count);
}

size_t	ft_nbrlen(long long nbr, int sign, int base)
{
	size_t	len;

	len = 0;
	if (sign)
	{
		if (nbr < 0)
		{
			len++;
			nbr = -nbr;
		}
	}
	if (nbr == 0)
		len++;
	while (nbr > 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}

int	ft_printf_strlen(char *str)
{
	int	len;

	len = 6;
	if (str)
		len = ft_strlen(str);
	return (len);
}
