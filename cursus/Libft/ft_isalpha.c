/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:40:20 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 23:03:16 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 20:40

#include "libft.h"

int	ft_isalpha(int c)
{
	return ( 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z');
}

/*
#include <stdio.h>
int	main()
{
	int i = -128;
	while( i < 130){
		printf("%d. this is '%c' \n", i, i );
		printf("return %d \n", isalpha(i));
		i++;
	}
}
*/

