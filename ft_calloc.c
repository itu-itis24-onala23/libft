/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:35:51 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 22:52:23 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = n * size;
	ptr = (unsigned char *)malloc(n * size);
	if (!ptr)
		return (NULL);
	while (i > 0)
	{
		ptr[--i] = '\0';
	}
	return (ptr);
}
