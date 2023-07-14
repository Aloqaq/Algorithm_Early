#include<bits/stdc++.h>
using namespace std;
char ch[4][61],c;
char se[2];//暂存结果 
int i=0,j=0,sos;
void changeHour(char y)
{
	if(y>='0'&&y<='9')
	{
		cout<<"0"<<y<<":";
	}
	if(y>='A'&&y<='Z')
	{
		int tmp=y-'A'+10;
		cout<<tmp<<":"; 
	}
}
void changeDay(int x)
{
	if(x==0)	cout<<"MON"; 
	if(x==1)	cout<<"TUE"; 
	if(x==2)	cout<<"WED"; 
	if(x==3)	cout<<"THU"; 
	if(x==4)	cout<<"FRI"; 
	if(x==5)	cout<<"SAT"; 
	if(x==6)	cout<<"SUN"; 
	cout<<" ";
}
int main()
{

	while(scanf("%c",&c)!=EOF)
	{
		if(c!=' ') 
			ch[i][j++]=c;
		else
		{
			i++;	
			if(i==2)
				sos=j;
		}
			
	}
	int tmp=0,tp=0, tp2=0;
	for(int k=0;k<sizeof(ch[tmp]);k++)
	{
		for(int l=0;l<sizeof(ch[tmp+1]);l++)
		{
			if(ch[tmp+1][l]==ch[tmp][k]&&tmp==0&&ch[tmp][k]>='A'&&ch[tmp][k]<='Z'&&tp==0) {
				se[tp++]=ch[tmp][k];
			} 
			else if(ch[tmp+1][l]==ch[tmp][k]&&tmp==0&&tp==1&&ch[tmp][k]>='A'&&ch[tmp][k]<='Z')  {
				se[tp++]=ch[tmp][k];
				tmp+=2;
				l=0;
			}
			
			if(tmp==2&&ch[tmp+1][l]==ch[tmp][k]&&ch[tmp][k]>='a'&&ch[tmp][k]<='z'){
				tp2=k-sos-3;//还有三个空格 
				break; 
			}	 
		}
			
	}
	
	int s1=se[0]-'A';
	changeDay(s1);
	
	changeHour(se[1]);
	
	if(tp2<=9)	cout<<"0"<<tp2<<endl;
	else	cout<<tp2<<endl;
	return 0;
}

