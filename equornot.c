//WRITE A C PROGRAM TO ACCEPT TWO INTEGERS AND CHECK WHETHER THEY ARE EQUAL OR NOT
#include<stdio.h>

int main(){
	int a,b;
	scanf("%d",&a);   //first integer
	scanf("%d",&b);   //second integer
	if(a==b)
		printf("The numbers are equal\n");
	else
		printf("Not equal");
	return 0;
}
