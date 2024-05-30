/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:42:04 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 13:54:08 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 20:42

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
	char str[20] = "Hello, world!"; // Example string
	printf("Original string: %s\n", str);

	// Test ft_bzero function
	ft_bzero(str, strlen(str)); // Call ft_bzero to zero out the string
	bzero(str, strlen(str));

	printf("String after ft_bzero: %s\n", str); // Print the modified string

	return 0;
}
*/
