/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:18:57 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 19:24:37 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ind;
	size_t	k;

	ind = 0;
	k = 0;
	if (needle[k] == '\0')
		return ((char *)haystack);
	if (haystack[ind] == '\0')
		return (NULL);
	while (haystack[ind] != '\0' && ind < len)
	{
		k = 0;
		while (haystack[ind + k] == needle[k]
			&& ind + k < len && needle[k] != '\0')
			k++;
		if (needle[k] == '\0')
			return ((char *)&haystack[ind]);
		ind++;
	}
	return (NULL);
}
