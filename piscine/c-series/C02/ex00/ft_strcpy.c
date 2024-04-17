/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:29:14 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/20 21:22:41 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:29
/*
#include <stdio.h>
#include <string.h>
char    *ft_strcpy(char *, const char *);

int main()
{
    char a[] = "hello";
    char b[] = "world";
//    printf ("%s", strcpy(a,b));
    printf ("%s", ft_strcpy(a,b));
}
*/

char    *ft_strcpy(char *dest, const char *src)
{
    int i;
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

