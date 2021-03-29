#include<stdio.h>
int  main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int A[a][a]={},B[b][b]={},C[c][c]={};
	int D[2*a+2]={},E[2*b+2]={},F[2*c+2]={};
	int e,f,g,h=0,i,j,k,I[3]={};
	char x;
	for(e=0;e<a;e++)
	{
		for(f=0;f<a;f++)
	{
		scanf("%d",&A[e][f]);
		D[e]=A[e][f]+D[e];
		D[f+a]=A[e][f]+D[f+a];
		if(e==f)
		D[2*a]=D[2*a]+A[e][f];
		if(e+f==a-1)
		{D[2*a+1]=D[2*a+1]+A[e][f];
	//	printf("-%d-",A[e][f]);
		}
	}
}
for(g=0;g<=2*a+1;g++)
{
	if(D[0]!=D[g]||D[g]==0)
	{
		h=1;
		
	}//printf("%d ",D[g]);
}
if(h==1)
{
	I[0]=1;
}

	for(e=0;e<b;e++)
	{
		for(f=0;f<b;f++)
	{
		scanf("%d",&B[e][f]);
		E[e]=B[e][f]+E[e];
		E[f+b]=B[e][f]+E[f+b];
		if(e==f)
		E[2*b]=E[2*b]+B[e][f];
		if(e+f==b-1)
		E[2*b+1]=E[2*b+1]+B[e][f];
	}
}
h=0;
for(g=0;g<=2*b+1;g++)
{
	if(E[0]!=E[g]||E[g]==0)
	{
		h=1;
		
	}//printf("%d ",E[g]);
}
if(h==1)
{
	I[1]=1;
}
		for(e=0;e<c;e++)
	{
		for(f=0;f<c;f++)
	{
		scanf(" %d",&C[e][f]);
		F[e]=C[e][f]+F[e];
		F[f+c]=C[e][f]+F[f+c];
		if(e==f)
		F[2*c]=F[2*c]+C[e][f];
		if(e+f==c-1)
		F[2*c+1]=F[2*c+1]+C[e][f];
	}}
h=0;
for(g=0;g<=2*c+1;g++)
{
	if(F[0]!=F[g]||F[g]==0)
	{
		h=1;
		
	}//printf("%d ",F[g]);
}
if(h==1)
{
	I[2]=1;
}
for(g=0;g<3;g++)
{
	if(I[g]==0)
{
	printf("no\n");
}
else printf("yes\n");
}
return 0;

}

