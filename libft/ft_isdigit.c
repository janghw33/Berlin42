/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:26:33 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 22:23:45 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 21:26

#include "libft.h"

int	ft_isdigit(int c)
{
	return ( '0' <= c && c <= '9');
}


/*#include <stdio.h>
int	main()
{
	int i = -128;
	while( i < 130){
		printf("%i. this is '%c' \n", i, i );
		printf("return %i \n", isdigit(i));
		i++;
	}
}*/
