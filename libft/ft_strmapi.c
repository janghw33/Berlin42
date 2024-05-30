/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:43:52 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:22:51 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

//#include <stdio.h>
//#include <ctype.h>
//char to_upper(unsigned int i, char c) {
//	return (char)toupper(c);
//}
//
//int main() {
//	char *str = "hello, world!";
//	char *result;
//
//	result = ft_strmapi(str, to_upper);
//
//	if (result) {
//		printf("Original string: %s\n", str);
//		printf("Transformed string: %s\n", result);
//	}
//
//	return 0;
//}