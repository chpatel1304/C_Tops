#include<stdio.h>
struct demo{
    int age;
	char name[20];	
}s1;
main(){
	printf(" Enter YOur NAme : ");
	scanf("%s",&s1.name);
	printf("\n Enter YOur Age : ");
	scanf("%d",&s1.age);
	printf("\nName : %s ",s1.name);
	printf("\nAge : %d ",s1.age);
	struct demo s2;
	printf("\n Enter YOur NAme : ");
	scanf("%s",&s2.name);
	printf("\n Enter YOur Age : ");
	scanf("%d",&s2.age);
	printf("\nName : %s ",s2.name);
	printf("\nAge : %d ",s2.age);
}
