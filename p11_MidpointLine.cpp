#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P11代码：中点画线法 
//缺点：

//输入：2端点坐标，整数 
void MidpointLine(int x0, int y0, int x1, int y1)
{
	int a, b, delta1, delta2, d, x, y;
	a=y0-y1;
	b=x1-x0;
	//以下值均为2倍 
	d=2*a+b;//d的初始值
	delta1=2*a;
	delta2=2*(a+b);
	//x y的初始值 
	x=x0;
	y=y0;
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<x1){
		if(d<0){
			//中点在直线下方，取右上方点，递增delta2
			x++;
			y++; 
			d+=delta2; 
		} else{
			//中点在直线上方，取右侧点，递增delta1 
			x++;
			d+=delta1; 
		}
		cout<<"x:"<<x<<" y:"<<y<<endl;
	}
	 
}

int main(){
	
	MidpointLine(0, 0, 5, 2);
	system("pause");
	return 0; 
} 
