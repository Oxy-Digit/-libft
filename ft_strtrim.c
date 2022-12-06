/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:18:05 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 13:18:05 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	before_string(char const *s1, char const *set)
{
	int	ind;
	int	j;
	int	c;

	c = 1;
	ind = 0;
	while (s1[ind] != '\0' && c == 1)
	{
		j = 0;
		while (s1[ind] != set[j] && set[j] != '\0')
			j++;
		if (s1[ind] != set[j])
			c = 0;
		ind++;
	}
	ind--;
	return (ind);
}

static	int	last_string(char const *s1, char const *set)
{
	int	ind;
	int	j;
	int	c;

	c = 1;
	ind = 0;
	ind = (int)ft_strlen(s1);
	while (ind > 0 && c == 1)
	{
		j = 0;
		while (s1[ind] != set[j] && set[j] != '\0')
			j++;
		if (s1[ind] != set[j])
			c = 0;
		ind--;
	}
	ind++;
	return (ind);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin;
	int		last;
	char	*copys1;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	begin = before_string(s1, set);
	last = last_string(s1, set);
	if (last < begin)
		return (ft_strdup("\0"));
	copys1 = ft_substr(s1, begin, (last - begin + 1));
	return (copys1);
}
