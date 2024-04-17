/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:10:08 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/19 19:17:28 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-19 18:10
/*

#include <stdio.h>
void    ft_sort_int_tab(int *, int);

int     main()
{
    int nArray[5] = {1, 5, 3, 8, 6};
    int nArraySize = sizeof(nArray) / sizeof(int);
    ft_sort_int_tab(nArray, nArraySize);
    for( int i = 0; i < nArraySize; i++)
    {
        printf("%i", nArray[i]);
    }
};
*/

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = 0;
    while (j < size ) {
        // there is no next one after last one. so loop until size - 1.
        while (i < size - 1) {
            if (tab[i] > tab[i + 1]) {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }
            i++;
        }
        j++;
    }
}
