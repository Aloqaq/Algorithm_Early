#include<iostream>
#include<algorithm> 
using namespace std;
int N,K;//考点数，考生数
struct Testee{
	long long id;//学生编号 
	int score;//分数 
	int rank;//学生排名 
	int pRank;//学生所在的考点排名
	int sSum;//学生所在的考点总分 
	int pId;//学生所在的考点编号 
	int locRank;//本地排名 
};
Testee testee[30010];

struct TestPoint{
	int testPoint;//考点总分 
	int pointRank;//考点排名  
	int student;//学生数 
	int pointId;//考场编号 
};
TestPoint testPoint[110];

bool myCmp(Testee A,Testee B)//按照总分排名，如果分数相同，则名次相同，且按照学号升序排列 
{
	if(A.score==B.score){
		return A.id>B.id;
	}
	return  A.score<B.score;
}
bool PointCmp(TestPoint A,TestPoint B){
	return A.testPoint>B.testPoint;
}

int main()
{
	int num;//学生数 
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>K;//输入该学校的学生数 
		testPoint[i].pointId=i;
		testPoint[i].student=K;
		int temp=num;
		for(int j=0;j<K;j++){//输入学校的学生 
			cin>>testee[num].id>>testee[num].score;
			testee[num].pId=i;
			testee[num].sSum+=testee[num].score;
			testPoint[i].testPoint+=testee[num].score;
			num++; //学生数量+1 
		} 
		
		sort(testee+temp,testee+num,myCmp);
	
		//调整名次编号
		int rk=0;//名次
		 
		for(int i=num;i>=temp;i--){
			if(testee[i].score!=testee[i+1].score){//分数不相等 
				testee[i].locRank=rk;	
			}
			else{//分数相等 
				testee[i].locRank=testee[i+1].locRank; 
			}
			rk++;
		} 
	
	}num;
	
	//学生排名之前 先给学校排名，并赋值到每个学生 
	sort(testPoint,testPoint+N,PointCmp);
	for(int i=0;i<N;i++){
		testPoint[i].pointRank=i+1;
	}
	for(int i=0;i<num;i++){
		for(int j=0;j<N;j++){
			if(testee[i].pId==testPoint[j].pointId)
				testee[i].pRank=testPoint[j].pointRank;	
		}
	}
	//学生排名 
	sort(testee,testee+num,myCmp);
	
	//调整名次编号
	int rk=0;//名次
	 
	for(int i=num;i>=0;i--){
		if(testee[i].score!=testee[i+1].score){//分数不相等 
			testee[i].rank=rk;	
		}
		else{//分数相等 
			testee[i].rank=testee[i+1].rank; 
		}
		rk++;
	} 
	

	cout<<num<<endl;
	num--;
	while(num>=0){
		printf("%013lld ",testee[num].id);
		cout<<testee[num].rank<<" "
			<<testee[num].pRank<<" "
			<<testee[num].locRank<<endl;
		num--;
	}
	return 0;
}
