#include<bits/stdc++.h>
using namespace std;
const int maxn=30;//�����Ʒ��Ϊ30 
int n,V,ans=0,w[maxn],c[maxn];
//��Ʒ����������������ǰ����ֵ������Ʒ��������Ʒ��ֵ�� 

void DFS(int index,int sumW,int sumC)
{
	if(index==n)	return;
	DFS(index+1,sumW,sumC);//��ѡindex������·��1�� 
	if(sumW+w[index]<=V)
	{
		if(sumC+c[index]>ans)
			ans=sumC+c[index];
		DFS(index+1,sumW+w[index],sumC+c[index]);//ѡ��index������·��2�� 
	 } 
 } 
int main()
{
	cin>>n>>V;
	for(int i=0;i<n;i++)
	{
		cin>>w[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	DFS(0,0,0);
	cout<<ans;
	return 0;
}
