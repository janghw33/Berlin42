/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:21:56 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 21:13:01 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 20:21

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a = (unsigned char *)s1;
	unsigned char *b = (unsigned char *)s2;

	if (n == 0)
		return (0);

	return 1;
}

#include <memory.h>
int main()
{
	printf("%i\n", memcmp("abcd","bc", 3));
	printf("%d\n", ft_memcmp("abc","bc", 3));
}