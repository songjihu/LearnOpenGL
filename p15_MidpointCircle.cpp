#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P15���룺�е㻭Բ�㷨 
//�ŵ㣺

//���룺�뾶������ ����ԭ��ΪԲ�� 
void MidpointCircle(int R)
{
	int x,y,d;
	//��ʼֵ 
	x=0;
	y=R;
	d=1-R;
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<y){
		//ֻѭ��1/8Բ
		if(d<0){
			//�е�M��Բ�ڣ�ȡ�Ҳ��
			d+=2*x+3;
			x++; 
		} else{
			//�е�M��Բ�⣬ȡ���²�� 
			d+=2*(x-y)+5;
			x++;
			y--;
		}
		cout<<"x:"<<x<<" y:"<<y<<endl;
	} 
}

//�Ľ�P17 
void MidpointCircle2(int R)
{
	int x,y,delta1,delta2,d;
	//��ʼֵ 
	x=0;
	y=R;
	d=1-R;
	//������ 
	delta1=3;
	delta2=5-R-R; 
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<y){
		//ֻѭ��1/8Բ
		if(d<0){
			//�е�M��Բ�ڣ�ȡ�Ҳ��
			d+=delta1;//��2�㷨�ļӷ�ʵ�� 
			delta1+=2;//������P17 
			delta2+=2;
			x++; 
		} else{
			//�е�M��Բ�⣬ȡ���²�� 
			d+=delta2;
			delta1+=2;
			delta2+=4;
			x++;
			y--;
		}
		cout<<"x:"<<x<<" y:"<<y<<endl;
	} 
}

int main(){
	
	MidpointCircle(10);
	MidpointCircle2(10);
	system("pause");
	return 0; 
} 
