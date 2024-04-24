/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:46 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/04/24 20:10:19 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-04-24 19:15
#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
#endif
