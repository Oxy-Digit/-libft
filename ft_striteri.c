/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 08:40:19 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 08:40:19 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	ind;

	ind = 0;
	if (s == NULL)
		return ;
	while (s[ind] != '\0')
	{
		(*f)(ind, &s[ind]);
		ind++;
	}
}
