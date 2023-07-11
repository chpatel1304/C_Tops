#include<stdio.h>
main(){
	printf("Enter Number :");
	int num;
	scanf("%d",&num);
	int reverse=0;
	int rem;
	while(num!=0){
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
	}
	printf("Reverse Number : %d",reverse);

}

