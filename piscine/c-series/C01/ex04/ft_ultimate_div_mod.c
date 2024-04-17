/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:54:13 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/18 21:00:25 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-18 20:54

#include <stdio.h>

void    ft_ultimate_div_mod(int *, int *);

int     main()
{
    int nData1 = 12;
    int nData2 = 5;
    ft_ultimate_div_mod(&nData1, &nData2);
    printf("%d %d", nData1, nData2);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;
    *a = *a / *b;
    *b = temp / *b;
}