/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:15:54 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 22:35:37 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = (size_t)start;
	while (*(s + i) != '\0')
	{
		i++;
		j++;
	}
	if (len > j)
		return (j);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	new_len;
	char	*p;

	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	new_len = count(s, start, len);
	i = 0;
	p = (char *)malloc(new_len + 1);
	if (p == NULL)
		return (0);
	while (i < new_len)
	{
		*(p + i) = *(s + start);
		start++;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
