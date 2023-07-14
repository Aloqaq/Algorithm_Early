#include<bits/stdc++.h>
using namespace std;
#define maxn 10010
struct PersonId//结构体 
{
	string id;//身份证号 
	int age=0;//年龄 
};
PersonId PID1[maxn],PID2[maxn]; 
int maxc=99999999;//记录最大年龄 
int maxi;//记录最大人员的下标 
int main()
{
	int n,m,i=0,j=0;
	cin>>n;
	int temp=n;
	while(temp>0){//输入校友身份信息 
		cin>>PID1[i].id;
		int ss=0;
		for(int k=0;k<18;k++)
		{
			if(k>=6&&k<=13){
				ss*=10;
				ss+=PID1[i].id[k]-'0';
			}
		}
		PID1[i].age=ss;
		//cout<<"年龄"<<PID1[i].age<<endl; 
		i++;
		temp--;
	}
	cin>>m;
	temp=m;
	int s,t;//两个循环的变量 
	while(temp>0)//输入参会人员信息 
	{
		cin>>PID2[j].id;
		int ss=0;
		for(int k=0;k<18;k++)
		{
			if(k>=6&&k<=13){
				ss*=10;
				ss+=PID2[j].id[k]-'0';
			}
		}
		PID2[j].age=ss;
		//cout<<"年龄"<<PID2[j].age<<endl; 
		
		j++;
		temp--;
	} 

	int len1,len2;//两个游标 
	int count=0;//参会校友人数 
	for(s=0;s<n;s++){//从校友开始匹配 
		 len1=0;
		for(t=0;t<m;t++){
			len2=0;
			while(len2<18){
				if(PID1[s].id[len1]==PID2[t].id[len2]){
					//cout<<"len2="<<len2<<endl;
					if(len2==17){
						count++;//匹配到末尾 
						if(maxc>PID1[s].age){
							maxc=PID1[s].age;
							 
							maxi=s;//记录下标 
						}
					}
					len2++;//游标2向后移动 
					len1++;
				}else{
					len2=0; 
					break;//匹配失败 
				}
			}
		}
	}
	//备用数据 
	int maxu=99999999;//记录最大年龄 
	int maxv=0;//记录最大人员的下标 
	for(int l=0;l<m;l++){
		if(maxu>PID2[l].age){
			maxu=PID2[l].age;
			maxv=s;//记录下标 
		}
	}
	if(count){
		cout<<count<<endl
			<<PID1[maxi].id<<endl;
	}else{
		cout<<count<<endl
			<<PID2[maxv].id<<endl;
	}
	
	
	return 0;
}
