/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:22:10 by ayonal            #+#    #+#             */
/*   Updated: 2025/05/26 17:40:31 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*ptr2;
	ptr2 = (unsigned char)ptr;
	while (n--)
	{
		*ptr2 = c;
		ptr2++;
	}
	return (ptr);
}
