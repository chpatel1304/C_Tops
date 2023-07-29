/*
struct{
mem fun;
}s1;

s1.mem fun
*/

#include<stdio.h>
struct demo{
	int age;
	char name[20];
}s1;
main(){
	s1.age=20;
	strcpy(s1.name,"Meet")	;
	printf("%d \n",s1.age);
	printf("%s",s1.name);
}
