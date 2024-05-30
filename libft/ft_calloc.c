/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:15:38 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 13:58:46 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-01 23:15

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*pt;
	int		check;
	int		i;

	check = number * size;
	if (number == 0 || size == 0)
		check = 1;
	else if ((check / number != size) || check < 0)
		return (NULL);
	pt = malloc(check);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < check)
	{
		pt[i] = 0;
		i++;
	}
	return ((void *) pt);
}