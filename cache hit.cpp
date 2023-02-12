#include<stdio.h>
int main()
{
	float cachehit,cachemiss,cacheratio;
	printf("\nEnter the total number of cache hit :");
	scanf("%f",&cachehit);
	printf("\nEnter the total number of miss :");
	scanf("%f",&cachemiss);
	cacheratio=(cachehit/cachemiss+cachehit);
	printf("\nThe cache ratio is :%f",cacheratio);
	return 0;
}
