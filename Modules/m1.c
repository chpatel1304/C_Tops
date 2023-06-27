//Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address 
#include<stdio.h>
main(){
  char name[20];
  long DOB;
  int age;
  char add[50];
  printf("Enter Your Name :");
  scanf("%s",&name);
  printf("Enter Your DOB :");
  scanf("%l",&DOB);
  printf("Enter Your Age :");
  scanf("%d",&age);
  printf("Enter Your Address :");
  scanf("%s",&add);
  printf("\nYour Name is %s ",name);
 printf("\nYour DOB is %l ",DOB); 	
  printf("\n Your Age is %d ",age);
   printf("\nYour Address is %s ",add);
	
}
