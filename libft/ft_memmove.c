/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:23:06 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:57:15 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-29 20:23
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
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