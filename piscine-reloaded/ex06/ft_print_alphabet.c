/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 00:03:11 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/22 22:09:19 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_print_alphabet(void);

// void	ft_putchar(char a)
// {
// 	write(1, &a, 1);
// }

// int	main(void)
// {
// 	ft_print_alphabet();
// }

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	unsigned char	a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
