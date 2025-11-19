#include "libft.h"

int	ft_atoi_step_2(const char * str, int * i, int sign)
{
	int	count;
	int	j;

	count = 0;
	j = *i;
	while (str[j] && (str[j] >= '0' && str[j] <= '9'))
	{
		count *= 10;
		count += str[j] - 48;
		j++;
	}
	if (sign < 0)
		return (-count);
	return (count);
}

int	ft_atoi(const char * str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == 32)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
			return (ft_atoi_step_2(str, &i, sign));
		else if (str[i] == '-')
		{
			sign -= 1;
			i++;
			return (ft_atoi_step_2(str, &i, sign));
		}
		else if (str[i] == '+')
		{
			sign += 1;
			i++;
			return (ft_atoi_step_2(str, &i, sign));
		}
		else
			return (0);
	}
}

/*int main(void)
{
    printf("atoi(-) -> %d | ft_atoi(-) -> %d\n", atoi("-"), atoi("-"));
    printf("atoi(--1) -> %d | ft_atoi(--1) -> %d\n", atoi("--1"), atoi("--1"));
    printf("atoi(++1) -> %d | ft_atoi(++1) -> %d\n", atoi("++1"), atoi("++1"));
    printf("atoi(1--) -> %d | ft_atoi(1--) -> %d\n", atoi("1--"), atoi("1--"));
    printf("atoi(1++) -> %d | ft_atoi(1++) -> %d\n", atoi("1++"), atoi("1++"));
    printf("atoi(      +234) -> %d | ft_atoi(      +234) -> %d\n", atoi("      +234"), atoi("      +234"));
    printf("atoi(   -   -234) -> %d | ft_atoi(   -   -234) -> %d\n", atoi("   -   -234"), atoi("   -   -234"));
    printf("atoi(r   7) -> %d | ft_atoi(r    7) -> %d\n", atoi("r    7"), atoi("r   7"));
    printf("atoi( i     +    234) -> %d | ft_atoi(      +    234) -> %d\n", atoi("      +    234"), atoi("      +    234"));

    return 0;
}*/
