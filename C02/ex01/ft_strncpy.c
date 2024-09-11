
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
    dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>

int main(void)
{
	char src[] = "Bonjouru!";
	char dest[15];

	printf("%s\n", ft_strncpy(dest, src, 4 ));
}
 */