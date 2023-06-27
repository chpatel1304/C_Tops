#include<stdio.h>
main(){
	int i,a,b;
	printf("\nEnter The Number :");
	scanf("%d",&b);
	for(i=1;i<=10;i++){
		a=b*i;
		printf("\n%d X %d = %d",b,i,a);	
	}
}
