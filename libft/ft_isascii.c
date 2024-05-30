/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpah.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 20:40:20 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:59:02 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 20:40
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
ascii = 0~127 = unsigned ascii =
*/
/*

#include <stdio.h>
int	main()
{
	int i = -128;
	while( i < 130){
		printf("%i. this is '%c' \n", i, i );
		printf("return %i \n", isascii(i));
		i++;
	}
}
*/

/*

#include <stdio.h>

int main() {
	unsigned char value = 128;
	printf("Character representation: %c\n", value);

	return 0;
}
*/
