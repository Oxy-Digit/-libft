/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:17:08 by tlumbers          #+#    #+#             */
/*   Updated: 2022/03/11 21:17:26 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == 0)
		return ((char *)str + ft_strlen((char *)str));
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		else
			str += 1;
	}
	return (0);
}
