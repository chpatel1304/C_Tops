#include<stdio.h>
main(){
	int i;
	int arr[]={12,34,45,6,78,52,11,23,76,89};
	int max=arr[0];
	for(i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Max Number Is :%d",max);
}
