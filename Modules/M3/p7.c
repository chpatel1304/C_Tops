#include<stdio.h>
main(){
	printf("Enter Number :");
	int num;
	scanf("%d",&num);
	int sum=0;
	int rem;
	while(num!=0){
		rem=num%10;
	    sum=sum+rem;
		num=num/10;
	}
	printf("Sum is : %d",sum);

}

