#include<bits/stdc++.h>
using namespace std;
const int maxn =100010;

//��ת������B1025 

struct node{
	int id;
	int val;
}Node[maxn];

map<int,int>mp,v;//map�ڲ��Զ����� 
int start,n,k;

 
int main()
{
	cin>>start>>n>>k;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		mp[a]=c,v[a]=b;//ӳ����һ����ַΪc,ӳ�䵱ǰֵΪb�������ڽ�� 
	}
	int index=0;
	while(1){
		Node[index].id=start;
		Node[index].val=v[start];
		start=mp[start];//�����Ϊʲômp������һ���ڵ��ԭ�� 
		if(Node[index].id>=0)	index++;
		if(start==-1)	break;
	} 
	
	//��ת��ջ��ʵ�� 
	start=0;//��ת��ɵ����� 
	while(1)
	{
		if(start+k>index)	break;
		
		stack<node>st;
		for(int i=start;i<start+k;i++)//ȫ����ջ 
		{
			st.push(Node[i]);
		}
		for(int i=start;i<start+k;i++)
		{
			Node[i]=st.top();//�ӵ�ǰλ�����¹����ڵ� 
			st.pop();//��ջ 
		}
		start=start+k;//�ƶ��α굽��ɷ�ת��λ�� 
	} 
	
	
	//��ӡ���� 
	for(int i=0;i<index;i++){
		
		//��ӡǰ�벿�� 
		printf("%05d %d ",Node[i].id,Node[i].val);
		
		//��ӡ��벿�� ��Ҫ�ж�-1�� 
		if(i+1==index)	cout<<"-1"<<endl;
		else printf("%05d\n",Node[i+1].id);
	}
	
	
	
	
	return 0;	
}

