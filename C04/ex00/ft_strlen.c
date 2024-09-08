
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* 
int	main(void)
{
	char	str[20] = "I'm dope. Yep!";
	int count = ft_strlen(str);

	printf("Count: %i\n",count);
	return(0);
}
 */