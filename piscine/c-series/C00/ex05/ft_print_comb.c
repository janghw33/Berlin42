/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:46:55 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/15 01:46:55 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

void ft_print_comb(void);
int main()
{
    ft_print_comb();
    return 0;
}
*/

#include <unistd.h>
void ft_print_comb(void)
{
    int i = '0';

    while(i <= '9')
    {

        int j = i + 1;
        while(j <= '9')
        {
            if( i == j)
            { ++j; }

            int k = j + 1;
            while(k <= '9')
            {
                {
                    write(1, &i, 1);
                    write(1, &j, 1);
                    write(1, &k, 1);

                    if(!(i == '7' && j== '8' && k == '9'))
                        write(1, ", ", sizeof(", "));
                }
                ++k;
            }
            ++j;
        }
        ++i;
    }
}
