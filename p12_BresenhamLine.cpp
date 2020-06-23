#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P12代码：Bresenham画线算法 
//优点：速度快并易于硬件实现 

//输入：2端点坐标，整数 
void BresenhamLine(int x1, int y1, int x2, int y2)
{
	int x,y,dx,dy,p;
	x=x1;
	y=y1;
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	for(;x<=x2;x++){
		cout<<"x:"<<x<<" y:"<<y<<endl;
		if(p>=0){
			//取上方点
			y++;
			p+=2*(dy-dx); 
		}else{
			p+=2*dy;
		}
	} 
	 
}

int main(){
	
	BresenhamLine(0, 0, 6, 3);
	system("pause");
	return 0; 
} 
