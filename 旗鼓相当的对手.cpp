#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int a[maxn],b[maxn],c[maxn];//������ѧӢ��
int sum[maxn];//�ܷ� 
int n;//���� 
int main()
{
	//����൱�Ķ��� 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i];//����ɼ� 
		sum[i]=a[i]+b[i]+c[i];
	} 
	
	int u,v,w,x;//�ĸ�����ֵ 
	int count=0;//����൱�Ķ��� 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==i)	continue;//�����Լ�����
			u=abs(a[i]-a[j]);
			v=abs(b[i]-b[j]);
		    w=abs(c[i]-c[j]);
			x=abs(sum[i]-sum[j]);
			if(u<=5&&v<=5&&w<=5&&x<=10){
				count++;
			}
		}
	}
	cout<<count/2; //��ͬ���������� 
	return 0;
 } 
