#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,n,temp,rev=0,d,arr[5];
	printf("\n HOW MANY ARRAY ELEMENTS YOU WANT TO PRINT\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=0;
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
		arr[j]=temp;
		j++;
	 	temp=0;
	 
	}
	printf("\n  palindrome ARRAY OF ELEMENTS");
	
	for(j=0;i<n;i++)
	{
		printf("\t%d",arr[j]);
	}
	
	getch();
} 
