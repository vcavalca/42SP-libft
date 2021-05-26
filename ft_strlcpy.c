/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:06:53 by vcavalca          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/05/26 16:00:43 by vcavalca         ###   ########.fr       */
=======
/*   Updated: 2021/05/26 11:48:44 by vcavalca         ###   ########.fr       */
>>>>>>> parent of 7548fca... Update
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
<<<<<<< HEAD
	if (!dstsize)
		return (src_len);
	while (src[i] != '\0' && i < dstsize)
=======
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize)
>>>>>>> parent of 7548fca... Update
	{
		dst[i] = src[i];
		i++;
	}
<<<<<<< HEAD
	dst[i] = '\0';
=======
	if (dstsize < src_len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
>>>>>>> parent of 7548fca... Update
	return (src_len);
}
