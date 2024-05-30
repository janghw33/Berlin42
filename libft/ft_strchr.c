/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:03:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 20:00:01 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 23:03

#include "libft.h"
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	const char *str = "abR*D*a";
	for (int i = 0; i < 130; i++) {
		if (isprint(i)) {
			printf(" %d. %c", i, (char)i);
			char *result = ft_strchr(str, i);
			if (result != NULL) {
				printf(" result: %s\n", result);
			}
		}
	}
	return 0;
}*/
