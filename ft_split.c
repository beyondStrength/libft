/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:25:20 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/16 23:33:13 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *s, char c)
{
	size_t	words;

	words = 1;
	while (*s)
	{
		if (*s && *s != c && *(s - 1) == c)
			words++;
		s++;
	}
	return (words);
}

static int	char_counter(char *s, char c)
{
	int	size;

	size = 0;
	while (*s && *s != c)
	{
		s++;
		size++;
	}
	return (size);
}

void	split_split(const char *s, char c, char **s_arr, size_t w_count)
{
	size_t	current_word;
	size_t	i;
	char	*p_s;

	i = 0;
	current_word = 0;
	p_s = (char *) s;
	while (*p_s && *p_s == c)
		p_s++;
	while (w_count--)
	{
		if (*p_s && *p_s != c)
			s_arr[current_word]
				= (char *) ft_calloc(char_counter(p_s, c), sizeof(char));
		i = 0;
		while (*p_s && *p_s != c)
			s_arr[current_word][i++] = *p_s++;
		while (*p_s && *p_s == c)
			p_s++;
		current_word++;
	}
}

char	**ft_split(const char *s, char c)
{
	size_t	words_count;
	char	**splited_arr;

	words_count = word_counter(s, c);
	splited_arr = (char **) ft_calloc(words_count + 1, sizeof(char *));
	if (!splited_arr)
		return (0);
	split_split(s, c, splited_arr, words_count);
	return (splited_arr);
}
