#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char a[] = "JDUHBI";
	
	ft_strlowcase(a);
	printf("%s\n", a);
	return (0);
}
