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
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}

//#include <memory.h>
//int main()
//{
//	printf("%d\n", memcmp("abka","abk", 3));
//	printf("%d\n", ft_memcmp("abka","abk", 3));
//}