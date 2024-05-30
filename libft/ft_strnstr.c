/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:43:41 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 13:36:21 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 21:43

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (str[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
//#include <stddef.h>
//
//char *strlstr(const char *haystack, const char *needle, size_t haystack_len) {
//	size_t needle_len = strlen(needle);
//
//	if (haystack_len < needle_len) {
//		return NULL; // haystack이 needle보다 짧은 경우
//	}
//
//	for (size_t i = 0; i <= haystack_len - needle_len; ++i) {
//		if (strncmp(haystack + i, needle, needle_len) == 0) {
//			return (char *)(haystack + i); // 부분 문자열이 발견된 경우 포인터 반환
//		}
//	}
//
//	return NULL; // 부분 문자열을 찾지 못한 경우 NULL 반환
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	const char *haystack = "Hello, world";
//	const char *needle = "world";
//	char *result = ft_strnstr(haystack, needle, strlen(haystack));
//	if (result != NULL) {
//		printf("Found at position: %ld\n", result - haystack);
//	} else {
//		printf("Not found\n");
//	}
//	return 0;
//}