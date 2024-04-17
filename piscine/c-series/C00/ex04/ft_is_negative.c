/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:09:46 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 16:43:12 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_is_negative(int n)
{
     if (n < 0) write(1, "n", 1);
     else write(1, "P", 1);
}
/*

#include <stdio.h>
int main()
{
    int a = scanf("%d", &a);
    ft_is_negative(a);
    return 0;
}

*/
