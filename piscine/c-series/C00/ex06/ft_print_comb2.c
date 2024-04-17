/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <janghw33@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:11:54 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/11 23:32:35 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <stdio.h>
void ft_print_comb2(void);
int main()
{
    ft_print_comb2();
    return 0;
}
*/

// 앞에 00 1씩 올려가고, 뒤에 00 하면되긴하는데 두자리 수인게 문제네.
// int로 하고 출력할때만 char로 바꿔서 따로 출력하면 되겠다.
#include <unistd.h>

void ft_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while(a < 100) {
        b = a + 1;

        while (b < 100)
        {
            char k = (a / 10) + 48;
            char l = (a % 10) + 48;
            write(1, &k, 1);
            write(1, &l, 1);
            write(1, " ", 1);
            char o = (b / 10) + 48;
            char p = (b % 10) + 48;
            write(1, &o, 1);
            write(1, &p, 1);
            ++b;
            write(1, ",", 1);
        }
        ++a;
    }
}
