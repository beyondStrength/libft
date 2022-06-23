/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:25:20 by iuturano          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2022/06/21 23:57:38 by iuturano         ###   ########.fr       */
=======
/*   Updated: 2022/06/22 20:38:02 by iuturano         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	if (!*s)
		return 0;
	count = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		count++;
	}
	if (count == 0)
		return (1);
	return (count);
}

// char	**ft_split(const char *s, char c)
// {
// 	char **split;


// }

#include <stdio.h>
int main (void)
{
	printf ("words: %i\n", count_words("  hel l sdasd  sd o  ", ' '));
}
