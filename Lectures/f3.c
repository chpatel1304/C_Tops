#include<stdio.h>
main(){
	int a,b,ans;
	printf("Enter The Value :");
	scanf("%d %d",&a,&b);
	ans=sum(a,b);
	printf("This is your ans %d",ans);
}
int sum(int a, int b){
	return a+b;
}
