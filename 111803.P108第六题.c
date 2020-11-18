  
#include<stdio.h>
void main(){
	int x;
	int y;
	printf("输入一个x的值，输出y相应的值\n");
	scanf("%d",&x);
	if(x<1){
		printf("%d\n",y=x);
	}
	else if(x>=1&&x<10){
		printf("%d\n",y=2*x-1);
	}
	else if(x>=10){
		printf("%d\n",3*x-11);
	}	


}
