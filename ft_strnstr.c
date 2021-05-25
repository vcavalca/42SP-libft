/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 09:36:19 by vcavalca          #+#    #+#             */
/*   Updated: 2021/05/25 09:42:22 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_haystack;
	char	*new_needle;

	i = 0;
	new_haystack = (char *)haystack;
	new_needle = (char *)needle;
	if (new_needle[i] == '\0')
		return (&new_haystack[i]);
	while (new_haystack[i] && i < len)
	{
		j = 0;
		while (new_needle[j] && new_haystack[i + j] == new_needle[j] && i + j < len)
			j++;
		if (new_needle[j] == '\0')
			return (&new_haystack);
		i++;
	}
	return (NULL);
}
