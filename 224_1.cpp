#include<stdio.h>
int main()
{
	int a,b,c,d=0,f,g,h,i;
	scanf("%d %d",&a,&b);
	for(c=a;d!=1;c++)
	{
		g=c;
		//printf("%d ",g);
		for(h=1;g>1;h++)
		{
			i=g%10;
			g=g/10;
			if(i==b)
			{
				printf("%d ",c);
				d=1;
				break;
			}
		}
	}
	
	
}
