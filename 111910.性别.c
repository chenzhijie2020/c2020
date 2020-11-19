  
#include<stdio.h>
void main(){
	int a;
	printf("用户输入");
	scanf("%d",&a);
	if(a==1){
		printf("输出男\n");
	}
	else if(a==0){
		printf("输出女\n");
	}
	else{
		printf("输入有误，请重新输入。\n");
	}


}
