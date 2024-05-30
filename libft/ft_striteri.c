/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:43:52 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 19:29:50 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

// 문자 변환 함수: 인덱스를 사용하여 문자를 변경
void to_upper_with_index(unsigned int i, char *c) {
		*c = (char)toupper(*c);
}

int main() {
	char str[] = "hello, world!";

	printf("Original string: %s\n", str);

	ft_striteri(str, to_upper_with_index);

	printf("Modified string: %s\n", str);

	return 0;
}
*/
