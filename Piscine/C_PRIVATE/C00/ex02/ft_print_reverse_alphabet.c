/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:45:21 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 15:45:55 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by ekrmx on 2024-03-11.
//

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char a = 'z';
    while( a >= 'a')
    {
        write(1, &a, 1);
        --a;
    }
}
/*

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
*/
