/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iuturano <iuriturano@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:40:58 by iuturano          #+#    #+#             */
/*   Updated: 2022/06/09 00:35:53 by iuturano         ###   ########.fr       */
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
	char *string = "Hello there, Iuri";
	char buffer[35];
	int r;
	r = strlcat(buffer,string,2);
	printf("\nCopied '%s' into '%s', length %d\n", string, buffer, r);

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
	char strchr_ex[] = "there is a K in the string?";
	printf("\n%s\n", ft_strchr(strchr_ex, 'K'));

	//STRRCHR
	char strrchr_ex[] = "there is a K in the but there is another K in the string?";
	printf("\n%s\n", ft_strrchr(strrchr_ex, 'K'));

}
