/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:30:57 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/19 19:18:02 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
    int a;
    int *ptr;

    a = 10;
    ptr = &a;
    printf("before (10): %d\n", a);
    ft_ft(ptr);
    printf("after (42): %d\n", a);
}

void    ft_ft(int *nbr)
{
    *nbr = 42;
}