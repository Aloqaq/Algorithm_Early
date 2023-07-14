#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[7];
	gets(ch);//gets读入整行 ，如果cin也即scanf自动以空格作为结束 
	int count=0;
	for(int i=0;i<5;i++){
		if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='0'&&ch[i]<='9')){
			count++;
		}		
	}
	cout<<count;
	return 0;
	 
 } 
