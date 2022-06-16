#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dup;
	size_t len;

	len = ft_strlen(s) + 1;
	dup = (char *) malloc(len * sizeof(char));
	if (dup == 0)
		return (0);
	ft_strlcpy(dup, s, len);
	return (dup);
}
