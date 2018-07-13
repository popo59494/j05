#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char a[] = "EUH435W";
	int i;

	i = ft_str_is_uppercase(a);
	printf("%d", i);
	return (0);
}
