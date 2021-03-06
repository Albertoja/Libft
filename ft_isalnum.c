/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:01:17 by aespinos          #+#    #+#             */
/*   Updated: 2022/01/20 16:02:58 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	int	y;
	{
		y = 0;
		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')
			|| (a >= '0' && a <= '9'))
		{
			y = 1;
		}
		return (y);
	}
}
