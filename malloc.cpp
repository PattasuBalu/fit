#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	float b,c;
	float *ptr;
	scanf("%d",&a);
	
	ptr=(float*) malloc(a * sizeof(float));
	for(int i=0;i<a;i++){
		scanf("%f",ptr+i);
	}
	for(int i=0;i<a;i++){
		b=b+*(ptr+i);
	}
	printf("%.2f",b);
	free(ptr);
	return 0;
}
