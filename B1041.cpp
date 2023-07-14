#include<bits/stdc++.h>
using namespace std;

struct Pat{
	long long id;
	int SjId;//ÊÔ»ú×ùÎ»ºÅ 
	int KsId;//¿¼ÊÔ×ùÎ»ºÅ 
};
Pat pat[1010];
int Search[1010];

int main()
{
	int N,M;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>pat[i].id>>pat[i].SjId>>pat[i].KsId;
	}
	
	cin>>M;
	for(int i=0;i<M;i++){
		cin>>Search[i];
	}
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(Search[i]==pat[j].SjId){
				cout<<pat[j].id<<" "<<pat[j].KsId<<endl;
				break;
			}
		}
	}
	return 0;
}
