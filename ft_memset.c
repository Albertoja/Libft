/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:17:18 by aespinos          #+#    #+#             */
/*   Updated: 2022/01/21 13:04:37 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
