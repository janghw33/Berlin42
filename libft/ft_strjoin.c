/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:25:37 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/05 22:56:14 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-05 22:25

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	char *result;
	int i;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * len);

	i = 0;
	while(s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while(s2[i])
	{
		result[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	return (result);
}

int main()
{
	char a[] = "adsadsa";
	char b[] = "dfsfsd";

	printf("%s",ft_strjoin(a, b));
}