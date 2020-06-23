#include"math.h"
#include"stdio.h"
#include"iostream"
using namespace std;

//P15代码：中点画圆算法 
//优点：

//输入：半径，整数 ，以原点为圆心 
void MidpointCircle(int R)
{
	int x,y,d;
	//初始值 
	x=0;
	y=R;
	d=1-R;
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<y){
		//只循环1/8圆
		if(d<0){
			//中点M在圆内，取右侧点
			d+=2*x+3;
			x++; 
		} else{
			//中点M在圆外，取右下侧点 
			d+=2*(x-y)+5;
			x++;
			y--;
		}
		cout<<"x:"<<x<<" y:"<<y<<endl;
	} 
}

//改进P17 
void MidpointCircle2(int R)
{
	int x,y,delta1,delta2,d;
	//初始值 
	x=0;
	y=R;
	d=1-R;
	//递增量 
	delta1=3;
	delta2=5-R-R; 
	cout<<"x:"<<x<<" y:"<<y<<endl;
	while(x<y){
		//只循环1/8圆
		if(d<0){
			//中点M在圆内，取右侧点
			d+=delta1;//乘2算法的加法实现 
			delta1+=2;//分析见P17 
			delta2+=2;
			x++; 
		} else{
			//中点M在圆外，取右下侧点 
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
