#include<stdio.h>
main(){
int marks;
printf("Enter Your marks : ");
scanf("%d",&marks);
if(marks>=90&&marks<100){
printf("A Grade !!!");	
}
else if(marks>=75&&marks<90){
	printf("B Grade !!");
}
else if(marks>=50&&marks<75){
	printf("C Grade !");
}
else if(marks>=35&&marks<50){
	printf("D Grade");
}
else{
	printf("FAIL ");
}
}
