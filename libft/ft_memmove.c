/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:23:06 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 18:38:37 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-29 20:23

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	j;
	unsigned char *de;
	unsigned char *sr;

	i = 0;
	j = 1;
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;

	if(!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		de += n - 1;
		sr += n - 1;
	}
	while (i < n)
	{
		*de = *sr;
		de += j;
		sr += j;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <memory.h>
int main()
{
	char dest[10] = "abcdhello";
	char src[5] = "world";

	printf("%s\n", memmove(dest, src, 5));
	printf("%s\n", ft_memmove(dest, src, 5));
}
*/
