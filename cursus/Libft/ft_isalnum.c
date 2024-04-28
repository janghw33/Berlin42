/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:40:20 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 23:01:29 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 20:40

#include "libft.h"

int	ft_isalnum(int c)
{
	return ( 'A' <= c && c <= 'Z' || 'a' <= c && c <= 'z' ||
			'0' <= c && c <= '9');
}

/* description
 alnum = alpha + number(digit)*/


/* // test
#include <stdio.h>
int	main()
{
	int i = -127;
	while( i < 130){
		printf("%i. this is '%c' \n", i, i );
		printf("return %i \n", isalnum(i));
		i++;
	}
}
*/
