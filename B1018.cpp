#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
int N;
char V1[maxn],V2[maxn];//����Ĵ����ͽ����
int Aw=0,Al=0,AVE=0;//��Ӯ�Ĵ���������Ĵ�����ƽ�ֵĴ���
int A1,A2,A3,B1,B2,B3;//�׺��ҵĴ��Ӽ������ֱ�Ӯ�Ĵ���  

void deal(char a,char b)
{
	if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C')){//��Ӯ 
		Aw++; 
		if(a=='B')	A1++;
		if(a=='C')	A2++;
		if(a=='J')	A3++;
	}else if(a==b){
		AVE++;//ƽ�� 
	}else{//��Ӯ 
		Al++;
		if(b=='B'&&a=='C')	B1++;
		if(b=='C'&&a=='J')	B2++;
		if(b=='J'&&a=='B')	B3++;
	
	}
} 
char cmp(int x,int y,int z)
{
	char ch='c'; 
	if(x>=y){
		if(y>=z)
			ch= 'B';
		else if(x>=z)	ch= 'B';
		else	ch= 'J';
	}else
	{
		if(z<=x)	ch= 'C';
		else if(y>=z)	ch= 'C';
		else ch= 'J';
	} 
	cout<<"ch="<<ch<<endl;
	return ch;
}
int main()
{
	//B1018���Ӽ�����
	cin>>N;
	
	for(int i=0;i<N;i++)
	{
		cin>>V1[i]>>V2[i];//����Ծ����
		//����Ծ�
		deal(V1[i],V2[i]); 
	}
//	cout<<"A1="<<A1<<endl
//		<<"A2="<<A2<<endl
//		<<"A3="<<A3<<endl
//		<<"B1="<<B1<<endl
//		<<"B2="<<B2<<endl
//		<<"B3="<<B3<<endl;
		
	char ret1=cmp(A1,A2,A3);
	char ret2=cmp(B1,B2,B3);
	cout<<Aw<<" "<<AVE<<" "<<Al<<endl
		<<Al<<" "<<AVE<<" "<<Aw<<endl
		<<ret1<<" "<<ret2;
	return 0;
}
