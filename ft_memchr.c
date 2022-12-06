/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:43:41 by tlumbers          #+#    #+#             */
/*   Updated: 2021/11/04 04:02:36 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*res;

	dest = (unsigned char *)s;
	while (n > 0)
	{
		if (*dest == (unsigned char)c)
		{
			res = dest;
			return (res);
		}
		dest++;
		n--;
	}
	return (NULL);
}
