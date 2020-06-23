#include"math.h"
#include"stdio.h"
#include"iostream"
#include"sjh.h"
using namespace std;

//P19代码：Bresenham画圆算法 
//优点：
/*
void SetPixel(int x, int y){
	cout<<"x:"<<x<<" y:"<<y<<endl;
	return;
}*/

//输入：半径，整数 ，以原点为圆心 
void BresenhamCircle(int R)
{
	int x,y,p;
	//初始值 
	x=0;
	y=R;
	p=3-2*R;
	for(;x<=y;x++){
		SetPixel(x,y);
		if(p>=0){
			//选下方点 
			p+=4*(x-y)+10;
			y--;
		}else{
			//选右侧点
			p+=4*x+6; 
		} 
	}
}



int main(){
	
	BresenhamCircle(10);
	system("pause");
	return 0; 
} 
