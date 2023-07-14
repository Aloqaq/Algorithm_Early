#include<bits/stdc++.h>
using namespace std;


stack <int>A;
stack <int>B;
char ret[110];
int num=1;
string strA,strB;
int main(){
	cin>>strA>>strB;
	int lenA,lenB;
	lenA=strA.length();
	lenB=strB.length();
	
	int temp;
	for(int i=0;i<=lenA-1;i++){
		temp=strA[i]-'0';
		A.push(temp);
	}
	for(int j=0;j<=lenB-1;j++){
		temp=strB[j]-'0';
		B.push(temp);
	}
	
	int count=1;
	int headNum=abs(lenA-lenB);
	int s;
	if(lenA>lenB)	s=lenB;
	else s=lenA;

	
	int a,b,c;//分别对应a，b的值和结果 
	int ch;
	for(int i=1;i<=s;i++){
		a=A.top();
		A.pop();
		b=B.top(); 
		B.pop();
		if(i%2!=0){
			//奇数位
			c=(a+b)%13;	 
		}else{
			//偶数位
			if((b-a)<0)	c=(b-a)+10;
			else c=b-a; 
		}
		
		if(c>=10){
			if(c==10)	ch='J';
			if(c==11)	ch='Q';
			if(c==12)	ch='K';
		}else{
			ch=c+'0';
		}
		ret[num++]=ch;
		
	}
	int last[110];
	int t=0;
	if(lenA>lenB){
		for(int i=0;i<headNum;i++){
			
			last[t++]=A.top();
			A.pop();
			
		}	
	}else{
		for(int i=0;i<headNum;i++){
			
			last[t++]=B.top();
			B.pop();
			
		}
	}
	for(int i=t-1;i>=0;i--){
		cout<<last[i];
	}
	for(int i=s;i>=0;i--){
		cout<<ret[i];
	}
	cout<<endl;
	
	return 0;
}
