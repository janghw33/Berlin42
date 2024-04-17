/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:13:35 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/28 19:30:14 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:31

int     ft_str_is_numeric(char *str);

#include <stdio.h>
int     main(void)
{
    char a[] = "12312213";
    char b[] = "312dd2d";
    printf(" result: %d", ft_str_is_numeric(a));
}

int     ft_str_is_numeric(char *str)
{
    int     i;
            i = 0;
            if(str[0] == '\0')
                return 1;

            while(str[i])
            {
                if (str[i] >= '0' && str[i] <= '9') {
                    i++;
        } else {
            return 1;
        }
    }
}