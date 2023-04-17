#include <stdio.h>
#include <stdlib.h>

int a[4][5];
int x, y;


main()
{

	for(x=0; x<4; x++)
	{
		for(y=0; y<5; y++)
		{
			printf("a[%d][%d]: ", x, y);
			scanf("%d",  &a[x][y]);
			if((x==3) && (y==4))
			{
				system("cls");
				for(x=0; x<4; x++)
				{
					for(y=0; y<5; y++)
					{
						printf("matriz a[%d][%d]: %d\n", x, y, a[x][y]);	
					}
				}	
			}
		}
	}
	
}