
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>
/* 
int main(void)
{
	printf("%d\n", ft_strlen("12"));
	printf("%d\n", ft_strlen("174"));
}
 */