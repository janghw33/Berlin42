/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:29:08 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 21:29:21 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 19:15
#ifndef FT_ABS_H
# define FT_ABS_H

static inline int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
#endif
