/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:49:25 by vcavalca          #+#    #+#             */
/*   Updated: 2021/05/24 20:52:30 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	char	*new_b;

	new_b = (char *)b;
	while (len > 0)
	{
		new_b[len - 1] = c;
		len--;
	}
	return (b);
}
