/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:32:08 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 20:00:53 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-28 19:32

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
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
	printf("%i ", s[i]);

	return 0;
};

*/