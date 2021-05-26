/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:06:53 by vcavalca          #+#    #+#             */
/*   Updated: 2021/05/26 11:31:35 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	position;
	size_t	hold;

	hold = 0;
	count = 1;
	position = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[hold])
	{
		hold++;
	}
	if (hold != 0)
	{
		while (count < dstsize)
		{
			dst[position] = src[position];
			count++;
			position++;
		}
	}
	dst[position] = '\0';
	return (hold);
}
