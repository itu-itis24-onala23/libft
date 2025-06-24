/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:12:11 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 16:09:57 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))

{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*(s + i) != '\0')
	{
		f(i, s + i);
		i++;
	}
}
