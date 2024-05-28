/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:21:56 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 21:43:20 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 20:21

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;

	if (n == 0)
		return (0);

	while (*a++ && *b++ && --n > 0)
	{
		if (*a != *b)
			return ((int)(*a - *b));
	}
	return (0);
}

//#include <memory.h>
//int main()
//{
//	printf("%d\n", memcmp("abka","abk", 3));
//	printf("%d\n", ft_memcmp("abka","abk", 3));
//}