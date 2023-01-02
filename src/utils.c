/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:18:51 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/30 13:39:00 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	len;
	int	i;

	len = 0;
	if (str == NULL)
	{
		ft_strdup("(null)");
		return (6);
	}
	while (str[i++])
		len += ft_putchar(str[i]);
	return (len);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;
	
	len = 0;
	num = ft_itoa(n);
	len += ft_printstr(num);
	free(num);
	return (len);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}