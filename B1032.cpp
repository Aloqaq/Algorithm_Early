#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
struct Player{
	int Id;
	int Score;
};
Player player[maxn];
int N;
bool MyCmp(Player A,Player B){
	return A.Score>B.Score;
}
int main()
{
	scanf("%d",&N);
	for(int i=0;i<maxn;i++){
		player[i].Id=i;
		player[i].Score=0;
	}
	
	int x,y;//暂存编号和分数 
	for(int i=0;i<N;i++){
		cin>>x>>y; 
		player[x].Score+=y;//核心点：直接找到对应的学校编号输入分数相加即可 
	}
	
	sort(player,player+N,MyCmp);
	
	cout<<player[0].Id<<" "<<player[0].Score<<endl;
	return 0;
}
