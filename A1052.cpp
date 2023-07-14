#include<bits/stdc++.h>
using namespace std;
//链表排序
const int maxn=100010;
struct Node{
	int address;//地址 
	int next;//指针域 
	int data;//数据域 
	bool flag=false;//是否在链表上 
}; 
Node node[maxn];//静态链表，地址与下标相同 

bool myCmp(Node A,Node B){
	if(A.flag==false||B.flag==false)//有一个无效节点则放到后面 
		return A.flag>B.flag;
	else
		return A.data<B.data;
}
int main()
{
	int N,head;//结点数，头结点指针
	cin>>N>>head;
	int val,add1,add2;//暂存结点数据和地址 
	for(int i=0;i<N;i++){
		cin>>add1>>val>>add2;
		node[add1].next=add2;
		node[add1].data=val;
		node[add1].address=add1;//地址必须要记录的吧 
	}
	
//	int pre=head; 
//	int now=node[head].next;//当前节点地址 
//	for(int i=0;i<N-1;i++){
//		if(node[pre].data>node[now].data){//降序则变换
//			node[pre].next=node[now].next;
//			node[now].next=pre; 	
//		}
//		pre=now;
//		now=node[now].next;
//	}
	int count=0,p=head;
	while(p!=-1){
		node[p].flag=true;
		count++;
		p=node[p].next;
	} 
	
	if(count==0){
		//特判，新链表中没有结点时输出0 -1
		printf("0 -1"); 
	}
	else{
		sort(node,node+maxn,myCmp);
	
		printf("%d %05d\n",count,node[0].address);
		for(int i=0;i<count;i++){
			if(i!=count-1)
				printf("%05d %d %05d\n",node[i].address,node[i].data,node[i+1].address);
			else
				printf("%05d %d -1\n",node[i].address,node[i].data);
		}
	}
	
	return 0;
} 
