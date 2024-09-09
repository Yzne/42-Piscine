
#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/* 
int main() {
    char str[] = "  ---+--+12-34ab567";
    int number = ft_atoi(str);
    printf("%d\n", number);
    return 0;
}
 */