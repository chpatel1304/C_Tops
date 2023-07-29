#include<stdio.h>
main(){
	int a,b;
	printf("Enter The Value :");
	scanf("%d %d",&a,&b);
	sum(a,b);
}
void sum(int a, int b){
	printf("This is your ans %d",a+b);;
}
