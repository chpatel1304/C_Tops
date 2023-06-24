#include<stdio.h>
main(){
	int a1;
	int i;
	int count_even=0,count_odd=0;
	int sum1=0,sum2=0;
	for(i=1;i<=10;i++){
		printf("Enter Your Value %d",i);
		scanf("%d",&a1);
		if(a1%2==0){
			printf("%d \n",a1);
			count_even++;
			sum1+=a1;
			
		}else{
			printf("%d \n",a1);
			count_odd++;
			sum2+=a1;
		}
		
	}
	printf("Total Even Numbers :%d",count_even);
	printf("\n Total Odd Numbers :%d",count_odd);
    printf("\n Total Even Numbers sum :%d",sum1);
	printf("\n Total Odd Numbers sum :%d",sum2);	
	
}
