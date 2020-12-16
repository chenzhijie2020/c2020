#include<stdio.h>
int taylor(int x){
	if(x<=0){
	return 0;
	}
	return x+taylor(x-1);
}
void main(){
	int b;
	scanf("%d",&b);
	printf("%d",taylor(b));
}
