#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P9���룺DDAֱ��ת���㷨
//ȱ�㣺�������󣬻����������Ǻõ�ɨ��ת���㷨

//���룺2�˵����꣬���� 
void DDALine(int x1, int y1, int x2, int y2)
{
	double dx, dy, e, x, y;
	dx=x2-x1;
	dy=y2-y1;
	e=(fabs(dx)>fabs(dy))?fabs(dx):fabs(dy);//ȡ���ݱ仯�Ľϴ�ֵ 
	dx/=e;//΢�� 
	dy/=e;
	x=x1;//������� 
	y=y1;
	for(int i=0;i<=e;i++){
		cout<<"x"<<(int)(x+0.5)<<"y"<<(int)(y+0.5)<<endl;//�������� 
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
