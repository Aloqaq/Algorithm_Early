#include<bits/stdc++.h>
using namespace std;

string str;
int sum=0,x;

int judge(char a){
	if(a=='a'||a=='d'||a=='g'||a=='j'||a=='m'||a=='p'||a=='t'||a=='w'||a==' '){
		return 1;
	}
	if(a=='b'||a=='e'||a=='h'||a=='k'||a=='n'||a=='q'||a=='u'||a=='x'){
		return 2;
	}
	if(a=='c'||a=='f'||a=='i'||a=='l'||a=='o'||a=='r'||a=='v'||a=='y'){
		return 3;
	}
	if(a=='s'||a=='z'){
		return 4;
	}
}
int main()
{
	getline(cin,str);
	//¶ÁÈë×Ö·ûÊı×é
	
	for(int i=0;i<str.length()-1;i++){
		x=judge(str[i]);
		sum+=x;
	} 
	cout<<sum;
	return 0;
 } 
