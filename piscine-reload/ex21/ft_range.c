/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:53:26 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 19:14:18 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 18:53

#include <stdlib.h>

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}

/*
#include <stdio.h>
int main()
{
	int i = 0;
	int *array = ft_range(3, 30);
	while(i< 27)
	{
		printf("%d ,",array[i] );
		i++;
	}
}*/
