#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
int n,d; //�±����࣬������
double sum=0;//������ 
struct Shop{
	double store,cost,percost;//����������ۼ� 
}sp[maxn]; 

bool cmp(Shop a,Shop b){//�����۽������� 
	return a.percost>b.percost;
}
int main()
{
	//B1020�±�
	cin>>n>>d;
	for(int i=0;i<n;i++)	cin>>sp[i].store;
	for(int i=0;i<n;i++){
		cin>>sp[i].cost;
		sp[i].percost=sp[i].cost/sp[i].store;
	}	
	sort(sp,sp+n,cmp); 
//	int tmp=0,j=0;//�����������ʱ����
//	int d0=d;
//	while(tmp<d)
//	{
//		if(d>=sp[j].store){
//			tmp+=sp[j].store;
//			sum+=sp[j].cost;
//		}else{
//			tmp+=d;
//			sum+=d*sp[j].percost;
//			break;
//		}
//		d-=tmp;//������� 
//		j++;//��һ����Ʒ 
//	} 

	for(int j=0;j<n;j++){
		if(sp[j].store<=d){
			d-=sp[j].store;
			sum+=sp[j].cost;//ȫ���۳� 
		}else{
			sum+=sp[j].percost*d;
			break;
		}
	}
	printf("%.2f\n",sum);
	return 0;
}

