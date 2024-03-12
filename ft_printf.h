/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:11:02 by pepaloma          #+#    #+#             */
/*   Updated: 2023/10/24 17:13:49 by pepaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXADECIMAL_LO "0123456789abcdef"
# define HEXADECIMAL_UP "0123456789ABCDEF"
# define DECIMAL "0123456789"

// for malloc and free ->
# include <stdlib.h>
// for write ->
# include <unistd.h>
// for va_start, va_arg, va_copy and va_end ->
# include <stdarg.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

int		ft_printf(char const *format, ...);
int		ft_print_hex(unsigned int n, int lcase);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_ptr(void *ptr);
int		ft_print_dec(int n);
int		ft_print_uns(unsigned int n);

#endif
