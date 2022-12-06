/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 11:05:23 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 11:05:23 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		ind;

	if (s == NULL)
		return (NULL);
	ind = 0;
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		substr = malloc((ft_strlen(s) - (size_t)start + 1) * sizeof(char));
	else
		substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (s[start] != '\0' && ind < len)
	{
		substr[ind] = s[start];
		ind++;
		start++;
	}
	substr[ind] = '\0';
	return (substr);
}
