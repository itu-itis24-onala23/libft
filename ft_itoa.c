/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:07:28 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 16:19:28 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static long	control(long number, char *s)
{
	if (number < 0)
	{
		s[0] = '-';
		number = -number;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			len;
	char		*s;

	num = n;
	len = int_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	num = control(num, s);
	if (num == 0)
	{
		s[0] = '0';
		return (s);
	}
	while (num > 0)
	{
		s[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
