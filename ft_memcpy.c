/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:06:33 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 22:57:54 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_src, const void *src_str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr_src;

	if (!src_str && !dest_src)
		return (NULL);
	i = 0;
	ptr_src = (unsigned char *)src_str;
	ptr = (unsigned char *)dest_src;
	while (i < n)
	{
		*(ptr + i) = *(ptr_src + i);
		i++;
	}
	return (dest_src);
}
