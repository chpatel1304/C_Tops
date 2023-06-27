#include<stdio.h>
main(){
  int i,a,sum;
  printf("\nEnter Value :");
  scanf("%d",&a);
  for(i=1;i<=10;i=i+2){
  	printf("\tOdd Number :%d",i);
  	sum+=i;
  }
  printf("\nSum ofOdd Number :%d",sum);
  
  
}
