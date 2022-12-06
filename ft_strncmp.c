/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:17:23 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 19:18:38 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	if (n == 0)
		return (0);
	while (n > ind)
	{
		if (((unsigned char *)s1)[ind] != ((unsigned char *)s2)[ind])
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
		if (((unsigned char *)s1)[ind] == '\0'
				|| ((unsigned char *)s2)[ind] == '\0')
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
		ind++;
	}
	return (0);
}
