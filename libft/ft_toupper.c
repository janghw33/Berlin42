/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:03:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 20:00:30 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 23:03

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*

#include <stdio.h>
int	main()
{
	int i = -128;
	while( i < 130){
		printf("%d. this is '%c' \n", i, i );
		printf("return %c \n", toupper(i));
		i++;
	}
}

*/
