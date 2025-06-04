#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,n,temp,rev=0,d;
	printf("\n HOW MANY ARRAY ELEMENTS YOU WANT TO PRINT\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	temp=a[i];
		while(a[i]!=0)
		{                                                
			d=a[i]%10;
			rev=rev*10+d;
			a[i]=a[i]/10;
				
		}
		
		if(temp==rev)
		{
			printf("\n NO IS PALINDROME=%d",temp);
			
		}
	
	}
	printf("\n ARRAY OF ELEMENTS");
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	getch();
} 
