#include<stdio.h>
main(){
	int num;
	printf("Enter Your Marks :");
	scanf("%d",&num);
	if(num>35){
		printf("PaSS");
    }else{
    	printf("Fail");
	}
	int num1;
	printf("\nEnter Number To check :");
	scanf("%d",&num1);
	if(num1%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
	int num2;
	printf("\nEnter Number To check :");
	scanf("%d",&num2);
	if(num2>0){
		printf("Positive");
	}
	else{
		printf("Negative");
	}
}
