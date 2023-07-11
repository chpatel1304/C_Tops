#include<stdio.h>
main(){
	int size;
	printf("Enter Size Of Array");
	scanf("%d",&size);
	int i,a[size],num;
	for(i=0;i<size;i++){
		printf("Enter Number =");
		scanf("%d",&num);
		a[i]=num;
		
	}
	for(i=0;i<size;i++){
		printf("%d \n",a[i]);
		
	}
	
}
