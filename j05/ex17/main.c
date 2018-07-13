#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char a[]="TATA";
	char b[]="TOTO";
	char *c;

	c = ft_strncat(a, b, 2);
	printf("%s", a);
	return (0);
}
