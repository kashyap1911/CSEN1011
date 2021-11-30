#include<stdio.h>

int main()
{
	int no,divisor,remainder;
	
	printf("enter the number : ");
	scanf("%d",&no);
	
	printf("enter the divisor : ");
	scanf("%d",&divisor);
	
	while(no >= divisor){
		no = no - divisor;
	}
	
	remainder = no;
	
	printf("the remainder is %d",remainder);
	
	return 0;
}
