#include<stdio.h>
void main(){
	char a;
	printf("用户输入一个字符，输出相应的游戏方向键\n");
	scanf("%c",&a);
	switch(a){
	case 'w':printf("你在点击上键\n");break;
	case 'a':printf("你在点击左键\n");break;
	case 's':printf("你在点击下键\n");break;
	case 'd':printf("你在点击右键\n");break;
	default:printf("请重新输入\n");
  
	}
}
