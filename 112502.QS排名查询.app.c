#include<stdio.h>
void main(){
	int a;
	printf("欢迎使用QS大学排名查询程序，请输入大学排名\n");
	scanf("%d",&a);
	if(a==1){
		printf("麻省理工学院\n");
	}
	else if(a==2){
		printf("斯坦福大学\n");
	}
	else if(a==3){
		printf("哈佛大学\n");
	}
	else if(a==4){
		printf("牛津大学\n");
	}
	else if(a==5){
		printf("加州理工学院\n");
	}
	else if(a==6){
		printf("苏黎世联邦理工大学\n");
	}
	else if(a==7){
		printf("剑桥大学\n");
	}
	else if(a==8){
		printf("伦敦大学学院\n");
	}
	else if(a==9){
		printf("帝国理工学院\n");
	}
	else if(a==10){
		printf("芝加哥大学\n");
	}
	else{
		printf("老铁的排名太靠后了，请输入0-10\n");
	}

}
