#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P9代码：DDA直线转换算法
//缺点：计算量大，画线慢，不是好的扫描转换算法

//输入：2端点坐标，整数 
void DDALine(int x1, int y1, int x2, int y2)
{
	double dx, dy, e, x, y;
	dx=x2-x1;
	dy=y2-y1;
	e=(fabs(dx)>fabs(dy))?fabs(dx):fabs(dy);//取横纵变化的较大值 
	dx/=e;//微分 
	dy/=e;
	x=x1;//递增起点 
	y=y1;
	for(int i=0;i<=e;i++){
		cout<<"x"<<(int)(x+0.5)<<"y"<<(int)(y+0.5)<<endl;//四舍五入 
		x+=dx;
		y+=dy;
	}
}

int main(){
	
	//DDALine(int x1, int y1, int x2, int y2)
	DDALine(0, 0, 5, 2);
	system("pause");
	return 0; 
} 
