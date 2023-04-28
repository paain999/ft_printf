/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:31 by dajimene          #+#    #+#             */
/*   Updated: 2023/04/28 17:36:29 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

char	*ft_utoa(unsigned int number)
{
	char			*num;
	int				len;
	unsigned int	n;

	len = 0;
	n = number;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (len--)
	{
		num[len] = number % 10 + 48;
		number /= 10;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*num;
	int		len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
