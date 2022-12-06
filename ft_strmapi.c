/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 08:50:34 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 08:50:34 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		ind;

	if (s == NULL)
		return (NULL);
	ind = 0;
	newstr = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s[ind] != '\0')
	{
		newstr[ind] = (*f)(ind, s[ind]);
		ind++;
	}
	newstr[ind] = '\0';
	return (newstr);
}
