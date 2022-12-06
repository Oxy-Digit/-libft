/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:46:30 by tlumbers          #+#    #+#             */
/*   Updated: 2021/11/04 03:30:19 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	if (s1 == NULL && s2 == NULL)
		return (0);
	while (n > 0)
	{
		if (((unsigned char *)s1)[ind] == ((unsigned char *)s2)[ind])
		{
			ind++;
			n--;
		}
		else
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
	}
	return (0);
}
