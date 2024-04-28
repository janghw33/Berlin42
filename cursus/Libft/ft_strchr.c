/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:03:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 23:59:20 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 23:03

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while (*ptr) {
		if (*ptr == c)
			return (ptr);
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	const char *str = "abaDJKCHN#@R*D*a";
	for (int i = 0; i < 130; i++) {
		if (isprint(i)) { // Check if character is printable
			printf(" %d. %c", i, (char)i); // Print character representation
			char *result = ft_strchr(str, i);
			if (result != NULL) {
				printf(" result: %s\n", result); // Print substring from result to end of string
			} else {
				printf(" result: Not found\n"); // Print "Not found" if character not found
			}
		}
	}
	return 0;
}
