/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:09:31 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/19 18:21:35 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-19 18:09
/*

#include <stdio.h>

int ft_strlen(char *);

int main()
{
    char *a = "hello";
    printf("%i", ft_strlen(a));
}
*/

#include <unistd.h>
int ft_strlen(char *a)
{
    int i = 0;
    while(*(a+i))
    {
        i++;
    }
    return i+1;
}
