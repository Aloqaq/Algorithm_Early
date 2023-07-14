#include<bits/stdc++.h>
using namespace std;
#define maxn 50050
struct Node
{
	int x,y,z;
};
Node node[maxn];
bool cmp(Node a,Node b)
{
	return a.z<b.z;
}

double Deal(Node p,Node q)
{
	return sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y)+(p.z-q.z)*(p.z-q.z));
}
int main()
{
	int N;
	cin>>N;//地图上的点数
	
	for(int i=0;i<N;i++)
	{
		cin>>node[i].x
			>>node[i].y
			>>node[i].z;
	} 
	sort(node,node+N,cmp);//排序
	
	double sum=0;
	for(int i=0;i<N-1;i++)
	{
		double tmp=Deal(node[i],node[i+1]);
		sum+=tmp;
	} 
	printf("%.3f",sum);
	
	return 0;
}


