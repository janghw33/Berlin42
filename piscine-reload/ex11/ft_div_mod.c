/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:52:03 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/21 22:09:15 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-21 20:52

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b;
    *mod = a%b;
}
int main()
{
    int dividend = 10;
    int divisor = 3;
    int quotient, remainder;

    // ft_div_mod 함수 호출
    ft_div_mod(dividend, divisor, &quotient, &remainder);

    // 결과 출력
    printf("Dividend divided by divisor: %d\n", quotient);
    printf("Remainder of dividend divided by divisor: %d\n", remainder);

    return 0;
}