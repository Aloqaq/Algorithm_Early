#include<bits/stdc++.h>
using namespace std;
map< int,map<int ,int> >s;//map 

int main()
{
	int i,j,k,n,q,temp;
	cin>>n>>q;
	while(q--){
		cin>>temp;
		cin>>i>>j;
		if(temp==1){//´æÈë
			cin>>k;
			s[i][j]=k;
		}
		else{
			cout<<s[i][j]<<endl;
		}
	}
	return 0;
}
