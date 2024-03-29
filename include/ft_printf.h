/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:00:01 by dajimene          #+#    #+#             */
/*   Updated: 2023/04/04 12:43:14 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(int c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printpercent(void);
int	ft_print_unsigned(unsigned int n);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_hex(unsigned long long s, const char format);
#endif
