
#include <stdio.h>

char	*skip_whitespace(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	return (str);
}

char	*handle_sign(char *str, int *sign)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = -(*sign);
		str++;
	}
	return (str);
}

int	convert_digits(char *str, int sign)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	ft_atoi(char *str)
{
	int	sign;

	sign = 1;
	str = skip_whitespace(str);
	str = handle_sign(str, &sign);
	return (convert_digits(str, sign));
}
/* 
int main() {
    char str[] = "---+--+12-34ab567";
    int number = ft_atoi(str);
    printf("%d\n", number);
    return 0;
}
 */