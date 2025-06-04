#include <stdio.h>
int size=10;
void main()
{
	int flag,i,j, temp, temp_size=size, num[10]={82,-89,78,-8,65,1,54,23,43,30};
	for(i=0; i<temp_size; ++i)
	{
		flag=0;
		for(j=0; j<size-1;++j)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
				flag=1;
			}
		}
		size--;
		if(flag==0)break;
	}

	printf("\nAfter Sorting\n");
	for(i=0; i<temp_size; ++i)
	{
		printf("%d\t",num[i]);
	}
}
