#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=10010;
struct Team{
	int tId;//������ 
	int pId;//��Ա��� 
	int score=0;//������� 
};

int N;
Team team[maxn];

bool MyCmp(Team A,Team B){
	return A.score>B.score;
}
int main()
{
	cin>>N;
	int x,y,z;
	for(int i=0;i<N;i++){
		cin>>x;
		getchar();
		cin>>y>>z;
		
		
		team[x].tId=x;
		team[x].score+=z;
	
	}
	sort(team,team+maxn,MyCmp);
	
	cout<<team[0].tId<<" "<<team[0].score<<endl;
	
	
	return 0;
}
