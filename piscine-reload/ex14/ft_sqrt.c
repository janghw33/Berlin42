/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:34:40 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/22 21:46:48 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-22 21:34

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i < nb) || (i < 47000))
	{
		if (nb == i * i)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
//
//#include <stdio.h>
//int main()
//{
//	printf("%d", ft_sqrt(16));
//	return 0;
//}
