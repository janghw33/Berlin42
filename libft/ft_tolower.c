/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 23:03:44 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:55:39 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 23:03

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*#include <stdio.h>
int	main()
{
	for (int i = -128; i < 130; i++)
	{
		printf("%d. this is '%c' \n", i, i );
		printf("return %c \n", ft_tolower(i));
	}
}*/