#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("Answer : %d",ans);
}
int sum(){
	int a,b;
	printf("Enter Your values : ");
	scanf("%d%d",&a,&b);
	return a+b;
}
