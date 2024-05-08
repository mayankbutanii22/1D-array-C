#include<stdio.h>
main()
{
	int length,x,a[5]={0,1,2,3,4};
	
	for(x=0; x<5; x++){
		scanf("%d",&a[x]);
	}
	a[0] = 3;
	a[1] = 7;
	a[2] = 1;
	a[3] = 8;
	a[4] = 6;
	length=*(&a + 1)-a;
	for(x=0; x<5; x++){
		printf("%d ",a[x]);
	}
	printf("\nLength of an Array: %d",length);
}