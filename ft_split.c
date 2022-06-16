#include "libft.h"

int		count_words(const char *s, char c)
{
	char	*p_s;
	int		word_count;

	p_s = (char *) s;
	word_count = 1;
	while (*p_s)
	{
		if (*p_s == c)
			word_count++;
		p_s++;
	}
	return (word_count);
}

int		find_bigger(const char *s, char c)
{
	int		size;
	char	*p_s;

	size = 0;
	p_s = (char *) s;
	while(*p_s)
	{
		if(*p_s == c)
		{
			if (p_s - s > size)
				size = p_s - s;
			s = p_s + 1;
		}
		p_s++;
	}
	return (size);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	char	*p_s;
	int		word_count;
	int		word_len;
	int		i;

	word_len = find_bigger(s, c) + 1;
	word_count = count_words(s, c);
	split = (char **) ft_calloc (word_count, sizeof(char *));
	p_s = (char *) s;
	i = 0;
	while (ft_strlen(s))
	{
		if (!*p_s || *p_s == c)
		{
			split[i] = ft_calloc(word_len, sizeof(char));
			ft_memmove(split[i], s, p_s - s);
			s = p_s+1;
			i++;
		}
		p_s++;
	}
	split[i] = 0;
	return (split);
}
