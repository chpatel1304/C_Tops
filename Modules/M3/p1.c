#include<stdio.h>
main(){
	int year;
	printf("Enter The Year You want to check ! ");
	scanf("%d",&year);
	if(year%4==0){
		printf("\n%d is a Leap Year !",year);
	}
	else{
		printf("\n%d is not Leap Year !",year);
	}
}
