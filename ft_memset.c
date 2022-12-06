/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:13:14 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 18:38:36 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				ind;
	unsigned char	*arr;

	ind = 0;
	arr = (unsigned char *)b;
	while (len > 0)
	{
		arr[ind] = c;
		ind++;
		len--;
	}
	return (b);
}
