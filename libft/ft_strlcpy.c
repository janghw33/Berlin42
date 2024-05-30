/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:46:26 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:57:52 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 18:46

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main() {
	char dest[5] = "aaa";
	char src[] = "bbbbb";

	char a[5] = "aaa";
	char b[] = "bbbb";

	strncpy(dest, src, 3);
	printf("%s\n", dest);

	ft_strlcpy(a, b, 3);
	printf("%s\n", a);

	return 0;
}
*/
