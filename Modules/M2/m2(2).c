//• Write a program to find the simple Interest & Compound Interest.
#include<stdio.h>
#include<math.h>
main(){
	double p,r,t;
	double si;
	double ci;
	printf("Enter Principal Amount=");
	scanf("\n %lf",&p);
	printf("Enter Rate Of Intrest Amount=");
	scanf("\n %lf",&r);
	printf("Enter Time Period Amount=");
	scanf("\n %lf",&t);
	si=(p*r*t)/100;
	ci=p*((pow((1+r/100),t)))-p;
	printf("\nSimple Intrest =%d",si);
	printf("\nCompound Intrest =%d",ci);
}
