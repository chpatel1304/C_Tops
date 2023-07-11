#include<stdio.h>
main(){
	int i;
	int marks;
	int total=0;
	for(i=1;i<=5;i++){
	printf("\nEnter The Marks Of Subject %d out of 100",i);
	scanf("%d",&marks);
	total+=marks;	
	}
	printf("\nTotal Marks Of 5 Subject = %d",total);
	double percentage;
	percentage=(marks/500)*100;
	printf("\nPercentage Of Student is %f",percentage);
	if (percentage>75){
		printf("\nDistinction !");
	}
	else if(percentage>60&&percentage<=75){
		printf("\nFirst Class ");
	}
	else if(percentage>50&&percentage<=60){
		printf("\nSecond Class ");
	}
	else if(percentage>35&&percentage<=50){
		printf("\nPass Class ");
	}
	else{
		printf("\nFail");
	}
	
}
