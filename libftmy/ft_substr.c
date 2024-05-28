/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:51:35 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/05 22:04:05 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-05 21:51

#include "libft.h"
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	int i;

	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
		return (NULL);

	i = 0;
	while (s[start +i])
	{
		dest[i] = s[start + i];
		i++;
	}

	return dest;
}

int main()
{
	char a[6] = "abcdef";
	printf("%s", ft_substr(a,3,5));
}