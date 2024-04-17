/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:45:37 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 19:14:36 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
// test code
#include <stdio.h>
#include <limits.h>
void ft_putnbr(int);

int main()
{
    ft_putnbr(123);
    printf("\n");
    ft_putnbr(-1000);
    printf("\n");
    ft_putnbr(INT_MIN);
}
*/

#include <unistd.h>
void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putnbr(nb / 10);
        ft_putchar('8');
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}




