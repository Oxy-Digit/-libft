/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:14:19 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 19:16:55 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ind;

	ind = 0;
	if (dstsize == 0)
		return ((ft_strlen(src)));
	while (src[ind] != '\0' && (ind < dstsize - 1))
	{
		dst[ind] = src[ind];
		ind++;
	}
	dst[ind] = '\0';
	return ((ft_strlen(src)));
}
