#include<stdio.h>
void main(){
	int a;
	int b;
	int ts2d[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
		printf("%d ",ts2d[a][b]);
		}
		printf("\n");
	}
}
