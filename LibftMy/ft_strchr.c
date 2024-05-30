/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:03:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/28 17:59:48 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 23:03

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int	i;

	str = (char*)s;
	i = 0;
	while (str[i]) {
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	const char *str = "abR*D*a";
	for (int i = 0; i < 130; i++) {
		if (isprint(i)) { // Check if character is printable
			printf(" %d. %c", i, (char)i); // Print character representation
			char *result = ft_strchr(str, i);
			if (result != NULL) {
				printf(" result: %s\n", result); // Print substring from result to end of string
			} else {
				printf("\n"); // Print "Not found" if character not found
			}
		}
	}
	return 0;
}
