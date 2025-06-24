/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:15:01 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 19:39:33 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	control;
	int	index;

	index = 0;
	i = 0;
	control = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == (unsigned char)c)
		{
			index = i;
			control = 1;
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	if (control)
		return ((char *)str + index);
	return (0);
}
