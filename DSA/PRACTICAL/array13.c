#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,n,temp,temp1,rev=0,d,arr[5]={0};
	printf("\n HOW MANY ARRAY ELEMENTS YOU WANT TO PRINT\n");
	scanf("%d",&n);
	j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
		temp1=a[i];
		temp=a[i];
		while(temp!=0)
		{                                                
			d=temp%10;
			rev=rev*10+d;
			temp=temp/10;
				
		}
		
		if(temp1==rev)
		{
		 printf("\n NO IS PALINDROME=%d",rev);
		 arr[j]=temp1;
		 j++;
			
		}
		rev=0;
	
		
		
	 	
	 
	}
	printf("\n  palindrome ARRAY OF ELEMENTS");
	j=0;
	while(j!='/0'){
		printf("\t %d",arr[j]);
		j++;
		
	}
//	for(j=0;j<n;j++)
//	{
//		printf("\t %d",arr[j]);
//	}
//	
	
	getch();
} 
