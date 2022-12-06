/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlumbers <tlumbers@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:33:47 by tlumbers          #+#    #+#             */
/*   Updated: 2021/10/31 15:33:47 by tlumbers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *s, char c)
{
	int	ind;
	int	word;

	ind = 0;
	word = 0;
	while (s[ind] != '\0')
	{
		if (s[ind] == c)
			ind++;
		else
		{
			word++;
			while (s[ind] != '\0' && s[ind] != c)
				ind++;
		}	
	}
	return (word);
}

static	int	ft_wordlen(const char *word, char c)
{
	int	ind;

	ind = 0;
	while (*word != '\0' && *word != c)
	{
		word++;
		ind++;
	}
	return (ind);
}

static	void	ft_cleanarray(char **arrays, int a)
{
	while (a >= 0)
	{
		if (arrays[a] != NULL)
			free(arrays[a]);
		arrays[a] = 0;
		a--;
	}
	free(arrays);
	arrays = 0;
}

static	char	**ft_fillarrays(const char *s, char c, char **arrays)
{
	int	a;
	int	ind;

	a = 0;
	ind = 0;
	while (s[ind] != '\0' && ft_count_words(s, c) > a)
	{
		while (s[ind] != '\0' && s[ind] == c)
			ind++;
		arrays[a] = ft_substr(&((char *)s)[ind], 0,
				ft_wordlen(&((char *)s)[ind], c));
		if (arrays[a] == NULL)
		{
			ft_cleanarray(arrays, ft_count_words(s, c));
			return (NULL);
		}
		ind = ind + ft_wordlen(arrays[a], c);
		a++;
	}
	arrays[a] = 0;
	return (arrays);
}

char	**ft_split(const char *s, char c)
{
	char	**arrays;
	int		count;

	if (s == NULL)
		return (NULL);
	count = ft_count_words(s, c);
	arrays = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (arrays == NULL)
		return (NULL);
	arrays = ft_fillarrays(s, c, arrays);
	return (arrays);
}
