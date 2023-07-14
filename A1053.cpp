#include<bits/stdc++.h>
using namespace std;
const int maxn=110;
int N,M;//���������Ҷ�ӽ����
long long S;//Ȩֵ
 
int path[maxn];//��¼·�� 

struct node{
	int data;//������
	vector<int> child;//����
	//ָ����ʹ��vector������к��ӽ��ı��
}Node[maxn];

bool cmp(int a,int b){
	return Node[a].data>Node[b].data;//���սڵ��������С�������� 
}

//��ǰ���ʽڵ�Ϊindex��numModeΪ��ǰ·���ϵĽ�����
//sumΪ��ǰ�Ľ���Ȩ�� 
void DFS(int index,int numNode,int sum){
	if(sum>S)	return;//��ǰ��sum����S��ֱ�ӷ���
	if(sum==S){
		if(Node[index].child.size()!=0)	return;//��û��Ҷ�ӽ�㣬ֱ�ӷ���
		//����Ҷ�ӽ�㣬��ʱpath[]�д����һ��������·���������
		for(int i=0;i<numNode;i++){
			printf("%d",Node[path[i]].data);
			if(i<numNode-1)	printf(" ");
			else printf("\n");
		} 
		return ;
	} 

	//sum<S����ѭ��
	for(int i=0;i<Node[index].child.size();i++){
		int child=Node[index].child[i];
		path[numNode]=child;//�����child�ӵ�·��path��ĩβ
		DFS(child,numNode+1,sum+Node[child].data);//�ݹ������һ��
	}
} 

int main()
{
	cin>>N>>M>>S;
	for(int i=0;i<N;i++){
		cin>>Node[i].data;
	}
	
	int  id,k,child;
	for(int i=0;i<M;i++){
		scanf("%d%d",&id,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			Node[id].child.push_back(child);//childΪ���id�ĺ��� 
		} 
		sort(Node[id].child.begin(),Node[id].child.end(),cmp);//���� 
	}
	path[0]=0;//·���ĵ�һ���������Ϊ0�Ž�� 
	DFS(0,1,Node[0].data); //DFS��� 
	
	return  0;
}
