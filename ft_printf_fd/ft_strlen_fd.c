/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: selcyilm <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/11 12:34:51 by selcyilm       #+#    #+#                */
/*   Updated: 2024/10/11 12:34:53 by selcyilm       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

size_t	ft_strlen_fd(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
