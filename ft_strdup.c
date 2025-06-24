/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:00:16 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 22:58:51 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(p + i) = *(s + i);
		i++;
	}
	p[i] = '\0';
	return (p);
}
