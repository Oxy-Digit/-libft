/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:07:06 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 08:11:03 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	ind;
	char	*nstr;

	ind = 0;
	nstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (nstr == NULL)
		return (NULL);
	while (s1[ind])
	{
		nstr[ind] = ((char *)s1)[ind];
		ind++;
	}
	nstr[ind] = '\0';
	return (nstr);
}
