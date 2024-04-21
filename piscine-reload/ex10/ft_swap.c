/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:44:14 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/21 22:10:51 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-21 20:44

// Allowed functions : None

#include <stdio.h>
void    ft_swap(int *a, int *b);

int main(void)
{
    int a = 3;
    int c = 4;
    printf("%d", a);
    printf("%d", c);
    ft_swap(&a, &c);
    printf("%d", a);
    printf("%d", c);
}

void    ft_swap(int *a, int *b)
{
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;
}
