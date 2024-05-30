/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:35:42 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/28 19:31:33 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 17:35

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int	i;

	str = (char*)s;
	i = 0;
	while(str[i])
	{
		i++;
	}
	if (c == '\0')
		return (str + i);
	i -= 1;
	while (str[i]) {
		if (str[i] == c)
			return (str + i);
		i--;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <ctype.h>
int main() {
	const char *str = "abR*D*a";
	for (int i = 0; i < 130; i++) {
			printf(" %d. %c", i, (char)i);
			char *result = ft_strrchr(str, i);
			if (result != NULL) {
				printf(" result: %s\n", result);
			} else {
				printf("\n");
			}
	}
	return 0;
}
*/
