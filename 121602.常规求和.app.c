#include<stdio.h>
void main(){
	int a=1;
	int b=0;
	int c;
	scanf("%d",&c);
	do{
		b=a+b;
		a++;
	}
	while(a<=c);
		printf("%d\n",b);
}
