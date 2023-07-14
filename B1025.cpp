#include<bits/stdc++.h>
using namespace std;
const int maxn =100010;

//反转链表——B1025 

struct node{
	int id;
	int val;
}Node[maxn];

map<int,int>mp,v;//map内部自动排序 
int start,n,k;

 
int main()
{
	cin>>start>>n>>k;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		mp[a]=c,v[a]=b;//映射下一个地址为c,映射当前值为b，类似于结点 
	}
	int index=0;
	while(1){
		Node[index].id=start;
		Node[index].val=v[start];
		start=mp[start];//这就是为什么mp保存下一个节点的原因 
		if(Node[index].id>=0)	index++;
		if(start==-1)	break;
	} 
	
	//反转在栈中实现 
	start=0;//反转完成的数量 
	while(1)
	{
		if(start+k>index)	break;
		
		stack<node>st;
		for(int i=start;i<start+k;i++)//全部入栈 
		{
			st.push(Node[i]);
		}
		for(int i=start;i<start+k;i++)
		{
			Node[i]=st.top();//从当前位置重新构建节点 
			st.pop();//出栈 
		}
		start=start+k;//移动游标到完成反转的位置 
	} 
	
	
	//打印内容 
	for(int i=0;i<index;i++){
		
		//打印前半部分 
		printf("%05d %d ",Node[i].id,Node[i].val);
		
		//打印后半部分 （要判断-1） 
		if(i+1==index)	cout<<"-1"<<endl;
		else printf("%05d\n",Node[i+1].id);
	}
	
	
	
	
	return 0;	
}

