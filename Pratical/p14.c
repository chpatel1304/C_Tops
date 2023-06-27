#include<stdio.h>
main(){
	int i,sum,average;
	for(i=1;i<=10;i++){
		printf("\nNumber :%d",i);
		sum+=i;
	}
	printf("\nSum Of 10 Numbers :%d",sum);
	average=sum/10;
	printf("\nAverage is :%d",average);
}
