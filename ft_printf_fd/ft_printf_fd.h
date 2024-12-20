/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_printf.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: selcyilm <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 18:22:47 by selcyilm       #+#    #+#                */
/*   Updated: 2024/10/10 18:22:49 by selcyilm       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf_fd(int fd, const	char *format, ...);
int		match_arg_fd(int fd, va_list arg, const char c);
size_t	ft_strlen_fd(const char *str);
int		ft_putchar_fd(int fd, int c);
int		ft_putstr_fd(int fd, const char *s);
int		ft_putpos_fd(int fd, unsigned long int nb, const char c);
int		ft_hex_fd(int fd, unsigned int hex, const char c);
int		ft_putnbr_fd(int fd, int nb);
int		ft_putptr_fd(int fd, unsigned long int p);
int		ft_put_u_fd(int fd, unsigned int nb);

#endif
