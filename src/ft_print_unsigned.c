/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:29:31 by dajimene          #+#    #+#             */
/*   Updated: 2023/01/17 11:29:15 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_print_unsigned(unsigned int n)
{
	char	*num;
	char	*aux;
	int		len;
	
	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_itoa(n);
		aux = num;
		aux = ft_strtrim(num, "-");
		len += ft_printstr(aux);
		free(aux);
		free(num);
	}
	return (len);
}