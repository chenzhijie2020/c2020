#include<stdio.h>
void main(){
	int a;
	int b;
	int c;
	int d;
	printf("请输入三个整型数字\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	d=a;
	a=b;
	b=d;
	}
	if(a>c){
	d=a;
	a=c;
	c=d;
	}
	if(b>c){
	d=b;
	b=c;
	c=d;
	}
	printf("输出结果为升序排序,由小到大\n%d\n%d\n%d\n",a,b,c);




}
