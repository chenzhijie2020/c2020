#include<stdio.h>
#include<string.h>
void main(){
	printf("想玩游戏吗，先回答下一句是什么？天王盖地虎，________。\n");
	int x=15,y;
	char a[]="宝塔镇河妖";
	char b[]="宝塔镇河妖";
	scanf("%s",&b);
	if(strcmp(a,b)==0){
		printf("口令正确，进入游戏\n");
		scanf("%d",&y);
		for(;y!=x;){
		printf("你好像猜错了\n");
		scanf("%d",&y);
		}
		printf("恭喜你，猜对了\n");
	}
	else{
	printf("口令错误，拉出去砍了\n");
	}
}
