/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:10:28 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 20:19:04 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 19:10

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}

//#include <string.h>
//
//int main() {
////	char dest[5] = "aaa";
////	const char src[] = "bbbbb";
//
//	char a[5] = "aaa";
//	const char b[] = "bbbb";
//
////	strncat(dest, src, 3);
////	printf("%s\n", dest);
//
//
//	printf("%zu\n", ft_strlcat(a, b, 3));
//	printf("%s\n", a);
//
//	return 0;
//}
