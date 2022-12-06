/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:25:00 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 19:27:58 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	ind;

	ind = 0;
	while (s[ind] != '\0')
		ind++;
	ind++;
	if (s == NULL)
		return (NULL);
	while (ind > 0)
	{
		ind--;
		if (s[ind] == (char)c)
			return (((char *)s) + ind);
	}
	return (NULL);
}
