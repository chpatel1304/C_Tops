#include<stdio.h>
main(){
	int a;
	printf("Enter Size Of Array You want :");
	scanf("%d",&a);
	int arr[a];
	int i;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array Is :"); 
	for(i=0;i<a;i++){
		printf("%d\t",arr[i]);
	}
	int toSearch;
	printf("\nEnter Number You Wat to search : ");
	scanf("%d",&toSearch);
	int found=0;
	for(i=0;i<a;i++){
		if(arr[i]==toSearch){
			found=1;
			break;
		}
	}
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

}
