/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:50:16 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 18:51:32 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;

	ind = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n > 0)
	{
		((unsigned char *)dst)[ind] = ((unsigned char *)src)[ind];
		ind++;
		n--;
	}
	return ((unsigned char *)dst);
}
