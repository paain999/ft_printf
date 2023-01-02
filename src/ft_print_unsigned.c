/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:31 by dajimene          #+#    #+#             */
/*   Updated: 2023/01/02 13:13:07 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	*num;
	int		len;
	
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_itoa((int)n);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}