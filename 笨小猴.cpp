#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
char ch[maxn];
int a[27],b[27];//记录每个单词出现的频率 
bool isPrime(int n)
{
	if(n<=1)	return false;
	int sqr=(int)sqrt(1.0*n);	
	for(int i=2;i<=sqr;i++){
		if(n%i==0)	return false;
	}
	return true;
}
int main()
{
	cin>>ch;
	memset(a,0,sizeof(a));
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]=='a'){
			a[0]++;
		}else if(ch[i]=='b'){
			a[1]++;
		}else if(ch[i]=='c'){
			a[2]++;
		}else if(ch[i]=='d'){
			a[3]++;
		}else if(ch[i]=='e'){
			a[4]++;
		}else if(ch[i]=='f'){
			a[5]++;
		}else if(ch[i]=='g'){
			a[6]++;
		}else if(ch[i]=='h'){
			a[7]++;
		}else if(ch[i]=='i'){
			a[8]++;;
		}else if(ch[i]=='j'){
			a[9]++;
		}else if(ch[i]=='k'){
			a[10]++;
		}else if(ch[i]=='l'){
			a[11]++;
		}else if(ch[i]=='m'){
			a[12]++;;
		}else if(ch[i]=='n'){
			a[13]++;
		}else if(ch[i]=='o'){
			a[14]++;
		}else if(ch[i]=='p'){
			a[15]++;
		}else if(ch[i]=='q'){
			a[16]++;
		}else if(ch[i]=='r'){
			a[17]++;
		}else if(ch[i]=='s'){
			a[18]++;
		}else if(ch[i]=='t'){
			a[19]++;
		}else if(ch[i]=='u'){
			a[20]++;
		}else if(ch[i]=='v'){
			a[21]++;
		}else if(ch[i]=='w'){
			a[22]++;
		}else if(ch[i]=='x'){
			a[23]++;
		}else if(ch[i]=='y'){
			a[24]++;
		}else if(ch[i]=='z'){
			a[25]++;
		}
	}
	int k=0;
	for(int i=0;i<26;i++){
		if(a[i]!=0){
			b[k++]=a[i];
		}
	} 
	sort(b,b+k+1);
	int max=b[k];
	int min=b[1];
	if(isPrime(max-min)==true){
		cout<<"Lucky Word"<<endl
			<<max-min;
	}else{
		cout<<"No Answer"<<endl
			<<0;
	}
	return 0;
 } 
