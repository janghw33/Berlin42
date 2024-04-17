/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:30:19 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/20 20:30:19 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:30

#include <stdio.h>
int     ft_str_is_lowercase(char *str);

int     main(){
    char a[] = "fsdfsd";
    printf("result : %d", ft_str_is_lowercase(a));

}

int     ft_str_is_lowercase(char *str)
{
    int     i;
    i = 0;
    if(str[i] == '\0')
        return 1;

    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            i++;
        }
        else {
            return 1;
        }
    }
    return 0;
}
