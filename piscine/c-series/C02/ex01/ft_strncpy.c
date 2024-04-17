/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:24:07 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/21 21:21:36 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:  29

/*
#include <stdio.h>
#include <string.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n);

int     main()
{
    char a[] = "hello";
    char b[] = "world";

    printf("%s", ft_strncpy(a,b,3));


}
*/

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    while(src[i] && i <= n )
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
