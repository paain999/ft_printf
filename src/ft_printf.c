/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:01:01 by dajimene          #+#    #+#             */
/*   Updated: 2023/01/02 13:12:39 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int	formats(va_list args, char const s)
{
	int	len;
	
	len = 0;
	if (s == 'c')
		len += ft_putchar(va_arg(args, int));
	if (s == 's')
		len += ft_printstr(va_arg(args, char *));
	if (s == 'i')
		len += ft_printnbr(va_arg(args, int));
	if (s == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	return(len);
}

int	ft_printf(char const *s, ...)
{
	int	len;
	int	i;
	va_list args;
	
	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += formats(args, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int main(void)
{
	int		n;
	char	h;
	
	h = 'h';
	n = 0;
	n = ft_printf("Letra: %c", h);
	printf("%d", n);
	return (0);
}