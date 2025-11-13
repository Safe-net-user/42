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
	while ((str[i] < '0' || str[i] > '9') && sign == 0)
	{
		if (str[i] == '-')
			sign = -1;
		else if (str[i] == '+')
			sign = 1;
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	return (ft_atoi_step_2(str, &i, sign));
}

/*int main(void)
{
    printf("atoi(-) -> %d | ft_atoi(-) -> %d\n", atoi("-"), ft_atoi("-"));
    printf("atoi(--1) -> %d | ft_atoi(--1) -> %d\n", atoi("--1"), ft_atoi("--1"));
    printf("atoi(++1) -> %d | ft_atoi(++1) -> %d\n", atoi("++1"), ft_atoi("++1"));
    printf("atoi(1--) -> %d | ft_atoi(1--) -> %d\n", atoi("1--"), ft_atoi("1--"));
    printf("atoi(1++) -> %d | ft_atoi(1++) -> %d\n", atoi("1++"), ft_atoi("1++"));
    printf("atoi(      +234) -> %d | ft_atoi(      +234) -> %d\n",
           atoi("      +234"), ft_atoi("      +234"));
    printf("atoi(   -   -234) -> %d | ft_atoi(   -   -234) -> %d\n",
           atoi("   -   -234"), ft_atoi("   -   -234"));
    printf("atoi(- + - 6) -> %d | ft_atoi(- + - 6) -> %d\n",
           atoi("- + - 6"), ft_atoi("- + - 6"));
    printf("atoi(      +    234) -> %d | ft_atoi(      +    234) -> %d\n",
           atoi("      +    234"), ft_atoi("      +    234"));

    return 0;
}*/
