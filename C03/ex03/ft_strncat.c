
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	dest[50] = "I'm ";
	char	src[50] = "dope!";
    unsigned    int nb = 3;

	ft_strncat(dest, src, nb);
	printf("%s\n",dest);
	return (0);
}
 */