/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 08:46:42 by vcavalca          #+#    #+#             */
/*   Updated: 2021/05/25 17:20:28 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_src;
	unsigned char	*new_dst;

	i = 0;
	new_src = (unsigned char *)src;
	new_dst = dst;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		if (new_src[i] == c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
