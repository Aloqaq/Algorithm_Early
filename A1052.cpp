#include<bits/stdc++.h>
using namespace std;
//��������
const int maxn=100010;
struct Node{
	int address;//��ַ 
	int next;//ָ���� 
	int data;//������ 
	bool flag=false;//�Ƿ��������� 
}; 
Node node[maxn];//��̬������ַ���±���ͬ 

bool myCmp(Node A,Node B){
	if(A.flag==false||B.flag==false)//��һ����Ч�ڵ���ŵ����� 
		return A.flag>B.flag;
	else
		return A.data<B.data;
}
int main()
{
	int N,head;//�������ͷ���ָ��
	cin>>N>>head;
	int val,add1,add2;//�ݴ������ݺ͵�ַ 
	for(int i=0;i<N;i++){
		cin>>add1>>val>>add2;
		node[add1].next=add2;
		node[add1].data=val;
		node[add1].address=add1;//��ַ����Ҫ��¼�İ� 
	}
	
//	int pre=head; 
//	int now=node[head].next;//��ǰ�ڵ��ַ 
//	for(int i=0;i<N-1;i++){
//		if(node[pre].data>node[now].data){//������任
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
		//���У���������û�н��ʱ���0 -1
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
