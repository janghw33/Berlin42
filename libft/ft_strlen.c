/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:25:01 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:55:11 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 22:25

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//#include <stdio.h>
//int main()
//{
//	printf("%zu", ft_strlen("he3213ll%@#%"));
//}