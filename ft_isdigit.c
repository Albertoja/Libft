/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:09:13 by aespinos          #+#    #+#             */
/*   Updated: 2022/01/20 16:09:28 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	int	x;
	int	y;
	{
		x = 0;
		y = 1;
		if (a < '0' || a > '9')
		{
		y = 0;
		}
		return (y);
	}
}