/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:09:26 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 19:25:51 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src || dest + n < src)
	{
		while (i < n)
		{
			*(dest_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	else
	{
		while (n--)
		{
			*(dest_ptr + n) = *(src_ptr + n);
		}
	}
	return (dest);
}
