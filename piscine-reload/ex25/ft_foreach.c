/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:42:46 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 22:10:40 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 20:42

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

void print_square(int n) {
	printf("%d ", n * n);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Squares of elements: ");
	ft_foreach(arr, length, &print_square);
	printf("\n");

	return 0;
} */
