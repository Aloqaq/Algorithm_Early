#include<bits/stdc++.h>
using namespace std;
struct Alpha{
	char ch1;
	char ch2;
	int times;
};
Alpha alpha[26];

bool MyCmp(Alpha first,Alpha second){
	if(first.times==second.times){
		return first.ch1<second.ch1;
	}
	return first.times>second.times;
}

int main(){
	for(int i=0;i<26;i++){
		alpha[i].ch1='a'+i;
		alpha[i].ch2='a'+i-32;
		
		alpha[i].times=0;
	}
	
	string str;
	getline(cin,str);
	
	for(int i=0;i<str.length();i++){
		for(int j=0;j<26;j++){
			if(str[i]==alpha[j].ch1||str[i]==alpha[j].ch2){
				alpha[j].times++;
				//cout<<str[i]<<alpha[j].times;
				break;
			}
		}
	}
	sort(alpha,alpha+26,MyCmp);
	cout<<alpha[0].ch1<<" "<<alpha[0].times<<endl;
	return 0;
}
