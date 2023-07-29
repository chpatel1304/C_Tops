#include<stdio.h>
main(){
 int arr[10];
 int i;
 for(i=1;i<=10;i++){
 	printf("Enter Number %d ",i);
 	scanf("%d",&arr[i]);
 }
 oddEven(arr);
}
void oddEven(int arr1[]){
	int sum_even=0;
	int sum_odd=0;
	int count_even=0;
	int count_odd=0;
	int i;
	for(i=1;i<=10;i++){
		
		if(arr1[i]%2==0){
		printf("\n Number Is even : %d ",arr1[i]);
		count_even++;
		sum_even+=arr1[i];	
		}
		else{
		printf("\n Number Is odd : %d ",arr1[i]);
		count_odd++;
		sum_odd+=arr1[i];	
		}
	}
	printf("\n Total Number of odd numbers are %d ",count_odd);
	printf("\n Sum of odd numbers are %d ",sum_odd);
	printf("\n Total Number of even numbers are %d ",count_even);
	printf("\n Sum of even numbers are %d ",sum_even);
}
