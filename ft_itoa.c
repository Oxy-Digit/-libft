/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:42:59 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/30 14:42:59 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int nb)
{
	int	c;

	c = 0;
	if (nb == -2147483648)
	{
		c++;
		nb = nb / 10;
	}
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		c++;
		nb = nb / 10;
	}
	return (c);
}

static	char	*ft_putnbr(int nb, char *str)
{
	int	len;
	int	res;

	len = ft_count(nb);
	res = ft_count(nb);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		len++;
		res++;
	}
	while (nb > 0 && len > 0)
	{
		len--;
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	str[res] = '\0';
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int		k;

	k = 0;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
		k++;
	result = (char *) malloc((ft_count(nb) + 1 + k) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (nb > 0 && nb < 10)
	{
		result[0] = nb + '0';
		result[1] = '\0';
		return (result);
	}
	result = ft_putnbr(nb, result);
	return (result);
}
