#include<stdio.h>
void main()
{
	double *ptr;
	int i,n,j;
	ptr=(double*)malloc(2*sizeof(double));
	printf("%d,",&ptr);
	printf("%d,",(&ptr+1));
	printf("%d,",ptr);
	printf("%d,",(ptr+1));
	printf("*ptr=%d,",*ptr);
	printf("*(ptr+1)=%d,",*(ptr+1));
	
}
