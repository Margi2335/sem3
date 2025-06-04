#include <stdio.h>
void main()
{
	int i,j, temp, size=10, num[10]={82,-89,78,-8,65,1,54,23,43,30};
	for(i=0; i<size-1; ++i)
	{
		for(j=i+1; j<size;++j)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	printf("\nAfter Sorting\n");
	for(i=0; i<size; ++i)
	{
		printf("%d\t",num[i]);
	}
}
