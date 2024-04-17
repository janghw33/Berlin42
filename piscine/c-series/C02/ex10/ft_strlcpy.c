/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:33:00 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/28 21:13:51 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:33

#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int     main()
{
    char a[] = "hello";
    char b[] = "world";
    printf("%d", ft_strlcpy(a,b,3));
    printf("%s", a);

}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    i = 0;
    while(i < size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i-1] = '\0';
    return i;
}
