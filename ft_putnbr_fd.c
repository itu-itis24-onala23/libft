/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayonal <ayonal@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:10:36 by ayonal            #+#    #+#             */
/*   Updated: 2025/06/24 15:22:08 by ayonal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;
	char		c;

	number = (long int)n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number = -number;
	}
	if (number >= 0 && number <= 9)
	{
		c = number + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd((int)(number / 10), fd);
		ft_putnbr_fd((int)(number % 10), fd);
	}
}
