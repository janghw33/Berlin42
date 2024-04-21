/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:12:10 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/21 22:28:18 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-21 22:12\

/*#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    printf("%d",ft_iterative_factorial(11));
}*/

int ft_iterative_factorial(int nb)
{
    if ((nb < 0) || (nb > 12))
        return 0;

    int sum = 1;
    while (nb > 0)
    {
        sum = sum*(nb);
        nb--;
    }
    return sum;
}