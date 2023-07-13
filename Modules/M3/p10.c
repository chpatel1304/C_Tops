#include<stdio.h>
main(){
	int arr[5];
	int temp=0;
	int i,j;
	for(i=0;i<5;i++){
		printf("Give Number :");
		scanf("%d",&arr[i]);
	}
	printf("Orginal Array Is :");
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Array Is :");
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
