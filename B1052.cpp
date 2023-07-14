#include <bits/stdc++.h>
using namespace std;

const int maxn=11;
char hand[maxn];
char eye[maxn];
char mouth[maxn];
int h,e,m;
int fg=1;
int main()
{
	string str;
	for(int i=0;i<3;i++){
		getline(cin,str);
		
		int len=str.length();
		if(fg==1){//hand
			for(int j=0;j<len;j++){
				getchar();//[
				int k=0;
				while(k<4){
					if(str[j+k]!=']')
						hand[h++]=str[j+k];
					k++;
				}
				getchar();//]
				j+=k;
			}
		}
		if(fg==2){//hand
			for(int j=0;j<len;j++){
				getchar();//[
				int k=0;
				while(k<4){
					if(str[j+k]!=']')
						eye[e++]=str[j+k];
					k++;
				}
				getchar();//]
				j+=k;
			}
		}
		if(fg==3){//hand
			for(int j=0;j<len;j++){
				getchar();//[
				int k=0;
				while(k<4){
					if(str[j+k]!=']')
						mouth[m++]=str[j+k];
					k++;
				}
				getchar();//]
				j+=k;
			}
		}
		if(fg==3)	break;
	}
	
	int count,x;
	cin>>count;
	cout<<"k="<<count*5<<endl; 
	for(int i=1;i<=count*5;i++){
		
		cin>>x;
		if(i%5==1||i%5==0)//hand
		{
			cout<<hand[x];
			if(i%5==0)	cout<<endl;
		}
		if(i%5==2||i%5==4)//eye
		{
			cout<<eye[x];
		}
		if(i%5==3)//mouth
		{
			cout<<mouth[x];
		}
	}
	return 0;
 } 
