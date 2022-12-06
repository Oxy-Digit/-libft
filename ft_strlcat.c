/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:10:39 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 19:13:30 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ind;
	size_t	k;
	size_t	r;

	ind = 0;
	k = 0;
	r = (ft_strlen(src) + ft_strlen(dst));
	if ((ft_strlen(dst) + 1) > dstsize)
		return (dstsize + ft_strlen(src));
	ind = ft_strlen(dst);
	dstsize = dstsize - ft_strlen(dst) - 1;
	while (k < dstsize && src[k] != '\0')
	{
		dst[ind] = src[k];
		ind++;
		k++;
	}
	dst[ind] = '\0';
	return (r);
}
