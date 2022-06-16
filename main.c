/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:40:58 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/11 22:25:46 by iuturano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	//MEMCPY
	printf("\nmemcpy:\n");
	char str[] = "works!!!\n";
	char cpy[50] = "";
	ft_memcpy(cpy, str, 14);
	if (cpy[0] == 'w')
		printf("%s\n", cpy);
	else
		printf("doens't work. :c\n");

	//MEMMOVE
	printf("memmove:\n");
	char dest[] = "oldstring";
	const char src[]  = "newstring";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest+2, dest, 7);
	printf("After memmove dest = %s, src = %s\n", dest+2, dest);

	//STRLCPY

	//STRLCAT
	char *string1 = "Hello there, Iuri";
	char buffer1[35];
	int r1;
	r1 = ft_strlcat(buffer1,string1,2);
	printf("\nCopied '%s' into '%s', length %d\n", string1, buffer1, r1);

	//TOUPPER
	printf("\n%c, %c\n", ft_toupper('1'), ft_toupper('a'));

	//TOLOWER
	printf("\n%c, %c\n", ft_tolower('1'), ft_tolower('A'));

	//STRCHR
	char strchr_ex[] = "a\0";
	printf("\n%s\n", ft_strchr(strchr_ex, '\0'));

	//STRRCHR
	char strrchr_ex[] = "a\0";
	printf("\n%s\n", ft_strrchr(strrchr_ex, '\0'));

	//STRNCMP
	char hello[20] = "Hello World!";
	char world[20] = "Hello";
	printf("\nstrncmp test:\n");
	if (ft_strncmp(hello, world, 11) == 32)
		printf("works!!\n");
	else
		printf("not working...\n");

	//MEMCHR
	char c = 'e';
	printf("\nmemchr test:\nresulting string of memchr(\"Hello World!\", 'e', 3):\n%s\n", (char *) ft_memchr(hello, c, 3));

	//MEMCMP
	printf("\nmemcmp test:\n");
	if (ft_memcmp(hello, world, 11) == 32)
		printf("works!!\n");
	else
		printf("not working...\n");

	//STRNSTR
	char a[31] = {"see FF your FF return FF now FF"};
    char b[3] = {"FF"};

	printf("\nstrnstr test: There is \"that string\" inside this one\n%s\n", ft_strnstr(a, b, 31));

	//ATOI
	char s[] = "  ---+--+1234ab567";
	printf("\natoi test: \"  ---+--+1234ab567\"\n");
	printf("%d\n\n", ft_atoi(s));

	//STRDUP
	char **words;
	char phrase[] = " hello boyszz z as world";
	words = ft_split(phrase, ' ');
	for (int i = 0; i < 6; i++) printf("\n%s\n", words[i]);
}
