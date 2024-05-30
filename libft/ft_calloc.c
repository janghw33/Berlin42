/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:15:38 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:58:25 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 23:15

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*pt;
	int		check;
	int		i;

	check = number * size;
	if (number == 0 || size == 0)
		check = 1;
	else if ((check / number != size) || check < 0)
		return (NULL);
	pt = malloc(check);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < check)
	{
		pt[i] = 0;
		i++;
	}
	return ((void *) pt);
}
/*
#include <stdio.h>

int main() {
	size_t elements = 4;
	size_t element_size = sizeof(int);
	int *array;
	int i;

	// ft_calloc을 사용하여 메모리 할당
	array = (int *)ft_calloc(elements, element_size);

	if (array) {
		// 할당된 메모리가 0으로 초기화되었는지 확인
		printf("Allocated array elements:\n");
		for (i = 0; i < elements; i++) {
			printf("%d ", array[i]);
		}
	}

	return 0;
}*/