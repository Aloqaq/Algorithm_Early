#include<bits/stdc++.h>
using namespace std;
double r1,r2,p1,p2;

int main()
{
	cin>>r1>>p1>>r2>>p2;
	double ret1,ret2;

	
	ret1=r1*r2*cos(p1)*cos(p2)-r1*r2*sin(p1)*sin(p2);
	ret2=r1*r2*cos(p1)*sin(p2)+r1*r2*cos(p2)*sin(p1); 
	
	/*
	������Ը������������Ϊ0ʱ�����һ�����ţ�
	���Ը�����������Ҫ�����ó������ۣ���Ϊ��ʽ���ԡ�
	*/
	if(abs(ret1)<0.05)
		ret1=0;
	if(abs(ret2)<0.05)
		ret2=0;
	if(ret2>=0){
		printf("%.2f+%.2fi\n",ret1,ret2);
	}
	else
		printf("%.2f%.2fi\n",ret1,ret2);
	
	
	return 0;
}
