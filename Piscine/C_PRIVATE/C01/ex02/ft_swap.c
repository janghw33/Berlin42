/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:16:13 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 22:37:06 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-15 22:33
/*

void    ft_swap(int*, int*);
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    int* c = &a;
    int* d = &b;
    printf("before *c = %d, *d = %d", *c, *d);
    ft_swap(c, d);
    printf("\nafter *c = %d, *d = %d", *c, *d);
}
*/

void    ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

