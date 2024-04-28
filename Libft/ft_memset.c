/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:32:08 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/28 20:41:35 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 19:32

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *arr;
	unsigned char	a;
	int	i;

	arr = (unsigned char*) s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		arr[i] = a;
		i++;
	}
	return (arr);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s[10];
	int arr[10];
//	memset(s,123,sizeof(s));
	memset(s,123,sizeof(s));
	ft_memset(arr,17,sizeof(arr));
	for ( int i = 0; i < 10; i++)
	printf("%i ", arr[i]);

	return 0;
};
*/


