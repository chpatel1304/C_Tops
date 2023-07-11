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
  fflush(stdin);
  printf("Enter Your DOB :");
  scanf("%l",&DOB);
  fflush(stdin);
  printf("Enter Your Age :");
  scanf("%d",&age);
  fflush(stdin);
  printf("Enter Your Address :");
  scanf("%s",&add);
  fflush(stdin);
  printf("\nYour Name is %s ",name);
 printf("\nYour DOB is %l ",DOB); 	
  printf("\n Your Age is %d ",age);
   printf("\nYour Address is %s ",add);
	
}
