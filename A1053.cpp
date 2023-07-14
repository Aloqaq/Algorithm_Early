#include<bits/stdc++.h>
using namespace std;
const int maxn=110;
int N,M;//结点数，非叶子结点数
long long S;//权值
 
int path[maxn];//记录路径 

struct node{
	int data;//数据域
	vector<int> child;//子树
	//指针域使用vector存放所有孩子结点的编号
}Node[maxn];

bool cmp(int a,int b){
	return Node[a].data>Node[b].data;//按照节点数据域大小进行排序 
}

//当前访问节点为index，numMode为当前路径上的结点个数
//sum为当前的结点点权和 
void DFS(int index,int numNode,int sum){
	if(sum>S)	return;//当前和sum超过S，直接返回
	if(sum==S){
		if(Node[index].child.size()!=0)	return;//还没到叶子结点，直接返回
		//到达叶子结点，此时path[]中存放了一条完整的路径，输出它
		for(int i=0;i<numNode;i++){
			printf("%d",Node[path[i]].data);
			if(i<numNode-1)	printf(" ");
			else printf("\n");
		} 
		return ;
	} 

	//sum<S继续循环
	for(int i=0;i<Node[index].child.size();i++){
		int child=Node[index].child[i];
		path[numNode]=child;//将结点child加到路径path的末尾
		DFS(child,numNode+1,sum+Node[child].data);//递归进入下一层
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
			Node[id].child.push_back(child);//child为结点id的孩子 
		} 
		sort(Node[id].child.begin(),Node[id].child.end(),cmp);//排序 
	}
	path[0]=0;//路径的第一个结点设置为0号结点 
	DFS(0,1,Node[0].data); //DFS求解 
	
	return  0;
}
