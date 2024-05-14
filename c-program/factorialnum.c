#include<stdio.h>
void main(){
	
	int num,fact=1;
	
	printf("Enter Number:");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	printf("Factorial %d Number is:%d",num,fact);
 
}


  