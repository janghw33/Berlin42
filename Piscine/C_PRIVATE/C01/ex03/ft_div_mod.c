/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:33:41 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/18 20:47:39 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-15 22:33
/*

#include <stdio.h>
void    ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
    int a = 3;
    int b = 5;
    int div = 0;
    int mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("%d %d", div, mod);
    return 0;
}
*/

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b == 0)
    {
        *div = 0;
        *mod = 0;
        return;
    }
    *div = a / b;
    *mod = a % b;
}
