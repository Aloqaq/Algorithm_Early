#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
struct List{
	char data;//������
	int next;//ָ����
	bool flag=0;//����Ƿ��ڵ�һ�������г���
}linkList[maxn];


int main(){
	//��̬������
	int initAddA,initAddB,N;//A��B�ĳ�ʼ��ַ��������
	cin>>initAddA>>initAddB>>N;

	for(int i=0;i<maxn;i++)
		linkList[i].flag=false;//Ĭ��δ����

	//������룬����һ���������
	int add,nextAdd;//��ǰ�����¸�����ַ
	char c;//���ڽ���
	for(int i=0;i<N;i++){
		cin>>add>>c>>nextAdd;
		linkList[add].next=nextAdd;
		linkList[add].data=c;
	}

	//������һ������
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
