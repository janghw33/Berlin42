/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:45:39 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 21:02:07 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 20:45

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
/*
#include <stdio.h>

int starts_with_h(char *str) {
	if (str[0] == 'a' || str[0] == 'A') {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	char *words[] = {"hello", "world", 0};

	printf("Words that start with 'a': %d\n",
 ft_count_if(words, &starts_with_h));

	return 0;
} */