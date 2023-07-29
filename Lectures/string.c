#include<stdio.h>
#include<string.h>
main(){
	char name1[20],name2[20];
	printf("Enter The String : ");
	scanf("%s",&name1);
	printf("Enter The String : ");
	scanf("%s",&name2);
	printf("%d",strlen(name1));
	printf("%s",strrev(name2));
	printf("%s",strupr(name1));
	printf("%s",strlwr(name1));
	strcpy(name2,name1);
	printf("%s",name2);
}
