#include<iostream>
#include<algorithm> 
using namespace std;
int N,K;//��������������
struct Testee{
	long long id;//ѧ����� 
	int score;//���� 
	int rank;//ѧ������ 
	int pRank;//ѧ�����ڵĿ�������
	int sSum;//ѧ�����ڵĿ����ܷ� 
	int pId;//ѧ�����ڵĿ����� 
	int locRank;//�������� 
};
Testee testee[30010];

struct TestPoint{
	int testPoint;//�����ܷ� 
	int pointRank;//��������  
	int student;//ѧ���� 
	int pointId;//������� 
};
TestPoint testPoint[110];

bool myCmp(Testee A,Testee B)//�����ܷ����������������ͬ����������ͬ���Ұ���ѧ���������� 
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
	int num;//ѧ���� 
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>K;//�����ѧУ��ѧ���� 
		testPoint[i].pointId=i;
		testPoint[i].student=K;
		int temp=num;
		for(int j=0;j<K;j++){//����ѧУ��ѧ�� 
			cin>>testee[num].id>>testee[num].score;
			testee[num].pId=i;
			testee[num].sSum+=testee[num].score;
			testPoint[i].testPoint+=testee[num].score;
			num++; //ѧ������+1 
		} 
		
		sort(testee+temp,testee+num,myCmp);
	
		//�������α��
		int rk=0;//����
		 
		for(int i=num;i>=temp;i--){
			if(testee[i].score!=testee[i+1].score){//��������� 
				testee[i].locRank=rk;	
			}
			else{//������� 
				testee[i].locRank=testee[i+1].locRank; 
			}
			rk++;
		} 
	
	}num;
	
	//ѧ������֮ǰ �ȸ�ѧУ����������ֵ��ÿ��ѧ�� 
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
	//ѧ������ 
	sort(testee,testee+num,myCmp);
	
	//�������α��
	int rk=0;//����
	 
	for(int i=num;i>=0;i--){
		if(testee[i].score!=testee[i+1].score){//��������� 
			testee[i].rank=rk;	
		}
		else{//������� 
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
