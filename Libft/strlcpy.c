/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:54:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/01 14:54:44 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 14:54
#include "libft.h"

//char	*strlcpy(char *dest, const char *src, size_t l)
//{
//	size_t	i;
//
//	i = 0;
//	while (i < l && *src)
//	{
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';
//
//	return dest;
//}

#include <stdio.h>
int main()hgg
{

	if (__STDC_VERSION__ >= 201710L)
		printf("We are using C18!\n");
	else if (__STDC_VERSION__ >= 201112L)
		printf("We are using C11!\n");
	else if (__STDC_VERSION__ >= 199901L)
		printf("We are using C99!\n");
	else
		printf("We are using C89/C90!\n");

	return 0;
}