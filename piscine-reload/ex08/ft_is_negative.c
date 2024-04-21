/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:19:41 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/21 20:29:23 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-21 19:19

// allowed function : ft_putchar

/*#include <unistd.h>
#include <limits.h>

void    ft_is_negative(int);
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    ft_is_negative(-21);
    ft_is_negative(20);
    ft_is_negative(INT_MIN);
    ft_is_negative(INT_MAX);
}*/

void    ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else ft_putchar('P');
}
