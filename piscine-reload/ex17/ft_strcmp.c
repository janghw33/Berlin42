/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:33:29 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 22:09:40 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-23 14:33

/*
	포인터없이 s1, s2를 비교할 경우 주소 비교가 찍힌다.
	내 Clion 환경에서 주소 값의 차는 5밖에 나지 않는다.
	43억의 값까지 나타낼 수 있는 메모리 값에 비해 5는 함수가 작동한다는 오해를 살 만하다.

	When comparing s1 and s2 without pointers, it results in address
 	comparison. In my CLion environment, the difference in address is only 5.
 	Compared to the memory capacity capable of representing values up
 	to 4.3 billion, the difference of 5 seems relatively insignificant
 	and could lead to a misunderstanding that the function is working correctly.
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
//#include <stdio.h>
//int main()
//{
//	printf("%d", ft_strcmp("aaaa", "aaac"));
//}
