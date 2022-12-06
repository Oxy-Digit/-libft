/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:16:40 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/27 18:35:42 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	size_t			ind;
	unsigned char	*dest;

	ind = 0;
	dest = (unsigned char *)b;
	while (n > 0)
	{
		dest[ind] = '\0';
		ind++;
		n--;
	}
}
