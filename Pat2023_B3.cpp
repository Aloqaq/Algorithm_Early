#include<bits/stdc++.h>
using namespace std;
const int maxn=10010;
int N;
struct Person{
	int id;
	int hcl;//含茶量 
};
Person p[maxn];

int calHCL(string str,int len){
	
	int times=0;
	int j;
	
	for(int i=0;i<len;i++){
		if(str[i]=='C'||str[i]=='c'){
			j=i+1;
			if(str[j]=='H'||str[j]=='h'){
				j=i+2;
				if(str[j]=='A'||str[j]=='a'){
					j=i+3;
					if(str[j]=='T'||str[j]=='t'){
						j=i+4;
						if(str[j]=='G'||str[j]=='g'){
							j=i+5;
							if(str[j]=='P'||str[j]=='p'){
								j=i+6;
								if(str[j]=='T'||str[j]=='t'){	
									times++;
								}
							}
						}
					}
				}
			}
		}
	}
	
	return times;
}

bool myCmp(Person A,Person B){
	return A.hcl>B.hcl;
}
int main()
{
	cin>>N;

	int id;
	string str;
	for(int i=0;i<N;i++){
		cin>>id;
		getchar();//一定要加这一句 
		getline(cin,str);
		int len=str.length();
		
		p[id].id=id;
		p[id].hcl+=calHCL(str,len);
	} 
	sort(p,p+maxn,myCmp);
	cout<<p[0].id<<" "<<p[0].hcl<<endl;
	return 0;
}
