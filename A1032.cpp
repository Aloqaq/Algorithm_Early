#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
struct List{
	char data;//数据域
	int next;//指针域
	bool flag=0;//结点是否在第一个链表中出现
}linkList[maxn];


int main(){
	//静态链表解决
	int initAddA,initAddB,N;//A，B的初始地址，结点个数
	cin>>initAddA>>initAddB>>N;

	for(int i=0;i<maxn;i++)
		linkList[i].flag=false;//默认未出现

	//混合输入，共用一个结点链表
	int add,nextAdd;//当前结点和下个结点地址
	char c;//用于接收
	for(int i=0;i<N;i++){
		cin>>add>>c>>nextAdd;
		linkList[add].next=nextAdd;
		linkList[add].data=c;
	}

	//遍历第一条链表
	int p;
	for(p=initAddA;p!=-1;p=linkList[p].next){
		linkList[p].flag=true;
	}

	for(p=initAddB;p!=-1;p=linkList[p].next){
		if(linkList[p].flag==true)	break;
	}
	if(p!=-1) 
		printf("%05d",p);
	else
		cout<<"-1"<<endl;
	return 0;
}
