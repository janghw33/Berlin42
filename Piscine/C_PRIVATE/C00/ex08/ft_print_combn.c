/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:16:07 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/19 19:46:41 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO
void ft_print_combn(int);
#include <stdio.h>
#include <stdbool.h>
int main()
{
    ft_print_combn(3);
    return 0;
}

// n == 1 ~ 9
// 01,02 ..09..12...23..

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void print(int *tab, int n)
{
    int i;
    bool low;

    i = 1;
    low = 1;
    while (i < n)
    {
        if (tab[i -1] >= tab[i])
            low = 0;
        i++;
    }
    if (low)
    {
        i = 0;
        while (i < n)
            ft_putchar(tab[i++] + 48);
        if (tab[0] < (10 -n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

void ft_print_combn(int n)
{
    int i;
    int tab[n];

    i = 0;
    while(i < n)
        tab[i++] = 0;

    while (tab[0] <= (10-n) && n >= 1 && n < 10)
    {
        print(tab, n);
        tab[n - 1]++;
        i = n - 1;
        while (i && (n > 1))
        {
            if (tab[i] > 9)
            {
                tab[i - 1]++;
                tab[i] = 0;
            }
            i--;
        }
    }

}


