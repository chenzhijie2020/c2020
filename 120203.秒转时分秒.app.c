#include<stdio.h>
void main(){
	int a;
	int b;
	int c;
	scanf("%d",&c);
	if(c>=0&&c<=86399){
	a=c/3600;
	b=c/60%60;
	c%=60;
	printf("%.2d:%.2d:%.2d\n",a,b,c);
	}
	else{
	printf("你输入的数值超出范围\n");
	}


}
