/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:22:00 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 17:25:52 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 21:22

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dest_ptr = (unsigned char *)dest;
	unsigned char *src_ptr = (unsigned char *)src;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n) {
		dest_ptr[i] = src_ptr[i];
		i++;
	}

	return dest;

}

/*
#include <stdio.h>
#include <string.h>

int main() {
	char dest[5] = "aaa";
	char src[] = "bbbbb";

	ft_memcpy(dest, src, 4);

	printf("%s\n", dest);

	return 0;
}
*/
