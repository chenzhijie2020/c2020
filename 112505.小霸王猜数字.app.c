#include<stdio.h>
void main(){
	int b;
	int c=5;
	printf("猜数字游戏开始了啦，请输入一个0-10之间的数字。\n");
	while(1){
	scanf("%d",&b);
	if(b==c){
	printf("恭喜你猜对了\n");
	}
	else if(b>c){
	printf("你猜得太大了\n");
	}
	else{
	printf("你猜得太小了\n");
	}
	}



}
