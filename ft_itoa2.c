#include "libft.h"


int	calculate_string_length(int num)
{
	int	length;

	length = 0;
	if (num < 1)
		length++;
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}

long long	get_absolute_value(long long n)
{
	long long	abs_value;

	abs_value = 1;
	if (n < 0)
		abs_value *= -n;
	else
		abs_value *= n;
	return (abs_value);
}

char	*allocate_string_memory(size_t length)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	return (str);
}
char	*ft_itoa(int n)
{
	char	*result_str;
	long long		number;
	int		is_negative;
	int		str_length;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	str_length = calculate_string_length(n);
	result_str = allocate_string_memory(str_length);
	if (!result_str)
		return (NULL);
	*(result_str + str_length) = '\0';
	number = get_absolute_value((long long)n);
	while (str_length--)
	{
		*(result_str + str_length) = number % 10 + '0';
		number /= 10;
	}
	if (is_negative)
		*result_str = '-';
	return (result_str);
}
