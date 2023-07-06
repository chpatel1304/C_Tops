#include<stdio.h>
main(){
	printf("Enter Your Choice What Do you want");
	printf("\nSqaure Or Cube Of Number ");
	printf("\n1.For Squaring ");
	printf("\n2.For Cubing  ");
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nEnter Number You want to Sqaure :");
			int num1;
			scanf("%d",&num1);
			num1=num1*num1;
			printf("\nAns :%d",num1);
			break;
        case 2:
			printf("\nEnter Number You want to Cube :");
			int num2;
			scanf("%d",&num2);
			num2=num2*num2*num2;
			printf("\nAns :%d",num2);
			break;			
	}
}
