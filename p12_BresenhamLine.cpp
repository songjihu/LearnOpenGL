#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P12���룺Bresenham�����㷨 
//�ŵ㣺�ٶȿ첢����Ӳ��ʵ�� 

//���룺2�˵����꣬���� 
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
			//ȡ�Ϸ���
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
