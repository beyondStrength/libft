/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:40:58 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/16 21:56:42 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	//SPLIT
	printf("\nsplit\n\n");
	char **words;
	char phrase[] = "\0hello\0world\0boys";
	words = ft_split(phrase, '\0');
	printf("split rodou");
	for (int i = 0; i < 3; i++)
	{
		printf("\nword[%i]: %s\n", i, words[i]);
	}
}
