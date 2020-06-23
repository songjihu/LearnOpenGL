#include"math.h"
#include"stdio.h"
#include"iostream"
#include"sjh.h"
using namespace std;

//P19���룺Bresenham��Բ�㷨 
//�ŵ㣺
/*
void SetPixel(int x, int y){
	cout<<"x:"<<x<<" y:"<<y<<endl;
	return;
}*/

//���룺�뾶������ ����ԭ��ΪԲ�� 
void BresenhamCircle(int R)
{
	int x,y,p;
	//��ʼֵ 
	x=0;
	y=R;
	p=3-2*R;
	for(;x<=y;x++){
		SetPixel(x,y);
		if(p>=0){
			//ѡ�·��� 
			p+=4*(x-y)+10;
			y--;
		}else{
			//ѡ�Ҳ��
			p+=4*x+6; 
		} 
	}
}



int main(){
	
	BresenhamCircle(10);
	system("pause");
	return 0; 
} 
