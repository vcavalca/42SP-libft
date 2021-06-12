/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:21:27 by vcavalca          #+#    #+#             */
/*   Updated: 2021/06/12 11:05:14 by vcavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char const *s1, char const *s2)
{
	char	*c_join;
	int		i;
	int		j;

	i = 0;
	c_join = (char *)ft_strmalloc((strlen(s1) + strlen(s2)));
	if (c_join == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		c_join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		c_join[i + j] = s2[j];
		j++;
	}
	c_join[i + j] = '\0';
	return (c_join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	new_s = (char *)ft_strmalloc((ft_strlen(s1) + ft_strlen(s2)));
	if (new_s == NULL)
		return (NULL);
	new_s = ft_join(s1, s2);
	return (new_s);
}
