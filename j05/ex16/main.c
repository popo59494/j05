#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char a[]="TATA";
	char b[]="TOTO";
	char *c;

	c = ft_strcat(a, b);
	printf("%s", a);
	return (0);
}
