/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 09:10:35 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 09:10:35 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_concate(char const *s1, char const *s2, char *newstr)
{
	int		ind;
	int		k;

	ind = 0;
	k = 0;
	while (s1[ind] != '\0')
	{
		newstr[k] = s1[ind];
		k++;
		ind++;
	}
	ind = 0;
	while (s2[ind] != '\0')
	{
		newstr[k] = s2[ind];
		k++;
		ind++;
	}
	newstr[k] = '\0';
	return (newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		ind;
	int		k;

	ind = 0;
	k = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	newstr = ft_concate(s1, s2, newstr);
	return (newstr);
}
