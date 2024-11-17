/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putptr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: selcyilm <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/10 18:23:14 by selcyilm       #+#    #+#                */
/*   Updated: 2024/10/10 18:23:15 by selcyilm       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"
#include <stdlib.h>

int	ft_putptr_fd(int fd, unsigned long int p)
{
	if (!p || p == 0)
		return (ft_putstr_fd(fd, "(nil)"));
	return (write(fd, "0x", 2) + ft_putpos_fd(fd, p, 'p'));
}
