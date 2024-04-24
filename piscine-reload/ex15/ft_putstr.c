/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:49:39 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/22 22:08:18 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-22 21:49

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		*str++;
	}
}
//
//#include <unistd.h>
//#include <stdio.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//int main()
//{
//	char *a = "asdaasd";
//	ft_putstr(a);
//}