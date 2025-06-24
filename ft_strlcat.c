/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:12:46 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 19:19:37 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static size_t	len(char *ptr)
{
	size_t	i;

	i = 0;
	while (*(ptr + i) != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = len(dest);
	j = 0;
	i = 0;
	if (size > k)
	{
		while (*(dest + i) != '\0')
			i++;
		while (*(src + j) != '\0' && i < size - 1)
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
		*(dest + i) = '\0';
		return (k + len((char *)src));
	}
	else
	{
		return (size + len((char *)src));
	}
}
