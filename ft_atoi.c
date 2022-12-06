/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:24 by tlumbers          #+#    #+#             */
/*   Updated: 2021/11/08 12:34:36 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			ind;
	int			minus;
	long int	res;

	minus = 1;
	res = 0;
	ind = 0;
	while (str[ind] == ' ' || str[ind] == '\f' || str[ind] == '\n'
		|| str[ind] == '\v' || str[ind] == '\r' || str[ind] == '\t')
		ind++;
	if (str[ind] == '+' || str[ind] == '-')
	{
		if (str[ind] == '-')
			minus = -1;
		ind++;
	}
	while (str[ind] >= '0' && str[ind] <= '9')
		res = (res * 10) + minus * (str[ind++] - '0');
	if ((int)res == res)
		return ((int)res);
	else if (minus == -1)
		return (0);
	else
		return (-1);
}
