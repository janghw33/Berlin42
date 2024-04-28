/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:40:20 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 22:22:27 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 20:40

#include "libft.h"

int	ft_isprint(int c)
{
	return ( ' ' <= c && c <= '~');
}
/*

#include <stdio.h>
int	main()
{
	int i = -128;
	while( i < 130){
		printf("%i. this is '%c' \n", i, i );
		printf("return %i \n", isprint(i));
		i++;
	}
}
*/
