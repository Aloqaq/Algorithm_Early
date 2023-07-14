#include<bits/stdc++.h>
using namespace std;
#define maxn 81
char ch[maxn][maxn],c;
int len[maxn],s=0,t=s;
int main()
{
	int i=0,j=0, tmp=0;
	while(scanf("%c",&c)!=EOF){
		if(c!=' '){
			ch[i][j++]=c;
			len[s]=j;//保存长度 
			tmp=len[s];
		}
		else{
			s++;
			j=0;//长度归零 
			i++;//下一个单词的存储 
		}
	}
	len[s]=tmp-1;

	t=s;
	for(int k=i;k>=0;k--)
	{
		for(int l=0;l<=len[t];l++){
			if((ch[k][l]>='a'&&ch[k][l]<='z')||(ch[k][l]<='Z'&&ch[k][l]>='A'))
				cout<<ch[k][l];
			else
				if(ch[k][l-1]!=' '&&t!=0)cout<<" ";
		}
		t--;
	}cout<<endl;
	return 0;
} 
