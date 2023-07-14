#include<bits/stdc++.h>

using namespace std;
int win[62520] ;//2500*25为最大数组空间 
int w,l;
int main()
{
	char s;//按单个字符输入 
	for(int i=0;cin>>s&&s!='E';i++){//记录分数 
		
		if(s=='W') win[i]=1;
		else win[i]=2;//巧妙将字符记录成数字 
	}
	//11分制
	for(int i=0;1;i++){//break为出口 
		if(win[i]==1)	w++;
		if(win[i]==2)	l++;
		if(win[i]==0){//读到0则记录结束 ，并输出分数 
			cout<<w<<":"<<l<<endl<<endl;
			break; 
		}
		if(w-l>=2||l-w>=2){
			if(w>=11||l>=11){
				cout<<w<<":"<<l<<endl;
				w=0;
				l=0;
			}
		}
	} 
	w=0;
	l=0;
	//21分制
	 for(int i=0;1;i++){
		if(win[i]==1)	w++;
		if(win[i]==2)	l++;
		if(win[i]==0){//读到0则记录结束 ，并输出分数 
			cout<<w<<":"<<l<<endl;
			break; 
		}
		if(abs(w-l)>=2){
			if(w>=21||l>=21){
				cout<<w<<":"<<l<<endl;
				w=0;
				l=0;
			}
		}
	} 
	
	
	
	return 0;
 } 
