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
	
	int x,y;//�ݴ��źͷ��� 
	for(int i=0;i<N;i++){
		cin>>x>>y; 
		player[x].Score+=y;//���ĵ㣺ֱ���ҵ���Ӧ��ѧУ������������Ӽ��� 
	}
	
	sort(player,player+N,MyCmp);
	
	cout<<player[0].Id<<" "<<player[0].Score<<endl;
	return 0;
}
