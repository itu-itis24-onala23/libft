/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:14:43 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 18:31:19 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len(const char *s1)
{
	size_t	i;

	i = 0;
	while (*s1)
	{
		i++;
		s1++;
	}
	return (i);
}

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_s;

	len_s = len(str2);
	j = 0;
	i = 0;
	if (*(str2 + i) == '\0')
		return ((char *)str1);
	while (*(str1 + i) != '\0' && i + len_s <= n)
	{
		j = 0;
		while (*(str1 + i + j) == *(str2 + j))
		{
			if (j == len_s - 1)
				return ((char *)str1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
