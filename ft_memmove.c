/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:52:07 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 18:54:21 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	ind;

	ind = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (len > ind)
	{
		if (dst < src)
			((unsigned char *)dst)[ind] = ((unsigned char *)src)[ind];
		else
			((unsigned char *)dst)[len - 1 - ind]
				= ((unsigned char *)src)[len - 1 - ind];
		ind++;
	}
	return (dst);
}
