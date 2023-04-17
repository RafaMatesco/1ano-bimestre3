#include <stdio.h>

int a[5][3], b[5][3], c[5][3];
int x, y;

main()
{

	for(x=0; x<5; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("a[%d][%d]: ", x, y);
			scanf("%d", &a[x][y]);
		}
	}

	for(x=0; x<5; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("b[%d][%d]: ", x, y);
			scanf("%d", &b[x][y]);
			c[x][y] = a[x][y] + b[x][y]; 
		}
	}


	for(x=0; x<5; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("c[%d][%d]: %d\n", x, y, c[x][y]);
		}
	}

}