#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char a[] = "tcejfb";
	
	ft_strupcase(a);
	printf("%s\n", a);
	return (0);
}
