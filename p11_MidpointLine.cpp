#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P11���룺�е㻭�߷� 
//ȱ�㣺

//���룺2�˵����꣬���� 
void MidpointLine(int x0, int y0, int x1, int y1)
{
	int a, b, delta1, delta2, d, x, y;
	a=y0-y1;
	b=x1-x0;
	//����ֵ��Ϊ2�� 
	d=2*a+b;//d�ĳ�ʼֵ
	delta1=2*a;
	delta2=2*(a+b);
	//x y�ĳ�ʼֵ 
	x=x0;
	y=y0;
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<x1){
		if(d<0){
			//�е���ֱ���·���ȡ���Ϸ��㣬����delta2
			x++;
			y++; 
			d+=delta2; 
		} else{
			//�е���ֱ���Ϸ���ȡ�Ҳ�㣬����delta1 
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
