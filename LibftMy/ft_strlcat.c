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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t 	j;

	i = 0;
	j = 0;
	while (dest[++i]);
	while(src[j] && (i < size))
	{
		dest[i++] = src[j++];
	}
	dest[i - 1] = '\0';
	return i;
}

#include <string.h>

int main() {
//	char dest[5] = "aaa";
//	const char src[] = "bbbbb";

	char a[5] = "aaa";
	const char b[] = "bbbb";

//	strncat(dest, src, 3);
//	printf("%s\n", dest);


	printf("%zu\n", ft_strlcat(a, b, 3));
	printf("%s\n", a);

	return 0;
}
