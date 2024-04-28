/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 22:25:01 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/27 23:07:58 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-27 22:25

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (*s)
		length++;
	return length;
}
/*
#include <stdio.h>
int main()
{
	printf("%zu", strlen("he3213ll%@#%"));
}

*/
