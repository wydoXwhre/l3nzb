#include <stdio.h>

int	main()
{
	int x;

	printf("entrer vote date de naissance: ");
	scanf("%d", &x);
	{
		if (x >= 2019)
			return (0);
	}
	printf("votre age est: %d", 2019 - x);
}
