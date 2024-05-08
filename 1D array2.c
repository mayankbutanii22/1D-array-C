#include<stdio.h>
main()
{
	float avg,sum;
	int x,a[5]={0,1,2,3,4};
	
	for(x=0; x<5; x++){
	scanf("%d",&a[x]);
	}
	a[0] = 12;
	a[1] = 42;
	a[2] = 18;
	a[3] = 50;
	a[4] = 26;
	
	for(x=0; x<5; x++){
		printf("%d ",a[x]);
		sum +=a[x];	
	}

	avg=sum/x;
	printf("\nAverage of an Array: %.1f",avg);
}