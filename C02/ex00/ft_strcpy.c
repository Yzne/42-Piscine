
char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
#include <stdio.h>

int main(void)
{
    char *src = "Hellloooo!";
	char dest[20] = "";

	printf("src: %s\n", src);	
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);	
}
 */