/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:09:54 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/19 18:53:42 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-19 18:09

/*
#include <stdio.h>
void    ft_rev_int_tab(int *, int);

int main()
{
//    int *a = (int[]){1, 2, 3, 4};
    int a[5] = {1, 2, 3, 4, 5};
    int i = 0;
    while(i * sizeof(int) < sizeof(a))
    {
        printf("%i", a[i]);
        i++;
    }
    ft_rev_int_tab(a, sizeof(a)/sizeof(int));
    i = 0;
    while(i * sizeof(int) < sizeof(a))
    {
        printf("%i", a[i]);
        i++;
    }
}
*/

#include <unistd.h>
void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int lastOne = size - 1;
    int i;
    i = 0;
    while(i < (size / 2)) {
        temp = tab[i];
        tab[i] = tab[lastOne - i];
        tab[lastOne - i] = temp;
        i++;
    }
}
