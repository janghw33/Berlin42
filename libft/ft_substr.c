/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:51:35 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/05/30 14:15:32 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-05-05 21:51
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pt;
	unsigned int	i;
	size_t			strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > strlen)
		len = strlen - start;
	pt = malloc(len + 1);
	if (!pt)
		return (NULL);
	i = 0;
	while (i < len)
	{
		pt[i] = *(s + i + start);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
//
//int main()
//{
//	char a[6] = "abcdef";
//	printf("%s", ft_substr(a,3,5));
//}