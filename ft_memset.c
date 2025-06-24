
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
#include <stdio.h>

void    *ft_memset(void *str, int c, size_t n)
{
	unsigned char *p;
	int i;
    i = 0;
    p = (unsigned char *) str;
    while (i < n)
    {
        *(p + i++) = (unsigned char) c;
    }
    return (str);
}

int main(){
    int a[3] = {1,2,3};
    ft_memset(a,255,4);
    ft_memset(a,0,3);

    
    for(int i =0;i<3;i++){
        printf("%d ",a[i] );
    }
}

