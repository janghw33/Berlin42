/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:07:01 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 02:07:01 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char n = '1';
    while (n <= '9')
    {
        write(1, &n, 1);
        ++n;
    }
}
/*

int main()
{
    ft_print_numbers();
    return 0;
}

*/
