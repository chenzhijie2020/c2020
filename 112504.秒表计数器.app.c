#include<stdio.h>
#include<windows.h>
void main(){
	int a;
	a=1;
	while(1){
	printf("%d秒过去了\n",a);	
	Sleep(1000);
	a++;
	}
}
