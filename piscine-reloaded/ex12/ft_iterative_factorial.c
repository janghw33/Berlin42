/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:12:10 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/22 20:20:43 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-21 22:12\

/*#include <stdio.h>

int ft_iterative_factorial(int nb);

int main()
{
    printf("%d",ft_iterative_factorial(11));
}*/

int	ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	while (nb > 0)
	{
		sum = sum * (nb);
		nb--;
	}
	return (sum);
}
