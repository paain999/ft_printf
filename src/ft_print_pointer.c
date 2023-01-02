/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:16:45 by dajimene          #+#    #+#             */
/*   Updated: 2023/01/02 13:47:43 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*int	ft_hex_len(uintptr_t ptr)
{
	int	len;
	
	len = 0;
	if()
}
*/
int	ft_print_pointer(unsigned long long int ptr)
{
	int	len;
	
	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1,"0", 1);
	else
	{
		
	}
}