#include<stdio.h>
int main()
{
	float cr;
	int i,p,p1,e;
	float cpu[5];
	float cpi,c,max;
	int n=1000;
	for(i=0;i<=4;i++)
		cpu[5]=0;
		printf("Enter the processors");
		scanf("%d",&p);
		p1=p;
		for(i=0;i<p;i++)
		{
			printf("Enter the cyccel per instructions processors:");
			scanf("%f",&cpi);
			printf("Enter the clockrate in ghz:");
			scanf("%f",&cr);
			c=1000*cpi/cr;
			printf("The cpu time is :%f",c++);
			cpu[i]=c++;
		}
		max=cpu[0];
		for(i=0;i<p1;i++)
		{
			if('cpu[i]e=max')
			max=cpu[i];
		}
		printf("The processor has lowest time :%f",max);
		return 0;
}
