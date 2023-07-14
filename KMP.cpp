#include<bits/stdc++.h>
using namespace std;
const int maxn=10000010;
string str1,str2;
char ch1[maxn],ch2[maxn]; 
int nextt[maxn];
void getNext(char s[],int len){//求解长度为了len的字符串s的next数组
	int j=-1;
	nextt[0]=-1 ;
	for(int i=1;i<len;i++){
		while(j!=-1&&s[i]!=s[j+1]){
			j=nextt[j];//反复令j=next[j] 
		}//直到j回退到-1 
		if(s[i]==s[j+1]){
			j++;
		}
		nextt[i]=j; 
	}
}
 
void KMP(char text[],char pattern[]){
	//字符串长度
	int n=strlen(text),m=strlen(pattern);
	getNext(pattern,m);//计算pattern的next数组 
	int ans=0,j=-1;//ans表示匹配的位置，初始化j为-1,表示没有任何一位被匹配 
	for(int i=0;i<n;i++){
		while(j!=-1&&text[i]!=pattern[j+1]) {
			j=nextt[j];//回退 
		}
		if(text[i]=pattern[j+1]){
			j++;
		} 
		if(j==m-1){//完全匹配 
			ans=i-m+2;
			cout<<ans<<endl;
			ans=0;//归零 
			j=nextt[j];//继续匹配 
		}
	} 
	return;
}
int main()
{
	cin>>ch1>>ch2;
	int len;
	int m=strlen(ch2);
	KMP(ch1,ch2);
	
	return 0;	
 } 
