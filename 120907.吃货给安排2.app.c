#include<stdio.h>
#include<string.h>
void main(){
	char s1[50];
	char s2[]="春节";
	char s3[]="端午节";
	char s4[]="中秋节";
	char s5[]="元宵节";
	printf("今天是什么节\n");
	scanf("%s",&s1);
	if(strcmp(s1,s2)==0){
	printf("给我安排饺子\n");
	}
	else if(strcmp(s1,s3)==0){
	printf("给我安排粽子\n");
	}
	else if(strcmp(s1,s4)==0){
	printf("给我安排月饼\n");
	}
	else if(strcmp(s1,s5)==0){
	printf("给我安排元宵\n");
	}
	else{
	printf("请重新输入\n");
	}
}
