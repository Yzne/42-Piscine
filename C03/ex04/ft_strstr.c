
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char str[50] = "I'm  and I know it!";
	char to_find[6] = "dope";

	char *yo = ft_strstr(str, to_find);
	if (yo != NULL)
		printf("Found: %s\n", yo);
	else
		printf("Found Nothing!\n");
	return (0);
}
 */