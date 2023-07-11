#include<stdio.h>
main(){
	printf("\n Enter Your Choice :");
	printf("\n 1.To Calculate Area Of Triangle.");
	printf("\n 2.To Calculate Area Of Circle.");
	printf("\n 3.To Calculate Area Of Rectangle.");
    int choice;
    scanf("%d",&choice);
    switch(choice){
    	case 1:
    		printf("\n Enter Base Lenght Of Triangle :");
    		int base;
    		scanf("%d",&base);
    		printf("\n Enter Altitude Lenght Of Triangle :");
    		int altitude;
    		scanf("%d",&altitude);
    		int area_of_Triangle;
    		area_of_Triangle=(0.5*base*altitude);
    		printf("\n Area of Triangle Is %d",area_of_Triangle);
    		break;
    		
    	case 2:
    		printf("\n Enter Radius Of Circle :");
    		int radius;
    		scanf("%d",&radius);
    		int area_of_Circle;
    		area_of_Circle=(3.14*radius*radius);
    		printf("\n Area of Triangle Is %d",area_of_Circle);
    		break;
    		
        case 3:
    		printf("\n Enter Breadth Of Rectangle :");
    		int breadth;
    		scanf("%d",&breadth);
    		printf("\n Enter  Lenght Of Rectangle :");
    		int lenght;
    		scanf("%d",&lenght);
    		int area_of_Rectangle;
    		area_of_Rectangle=lenght*breadth;
    		printf("\n Area of Triangle Is %d",area_of_Rectangle);
    		break;
	}
}
