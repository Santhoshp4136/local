#include<stdio.h>
int main (){
 	const int a = 20;
	printf("\n%d  ",a);
	int *ptr; 
	ptr= &a;
	++*ptr;
	printf("%d\n",a);
}
