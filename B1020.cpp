#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
int n,d; //月饼种类，需求量
double sum=0;//总收益 
struct Shop{
	double store,cost,percost;//库存量，总售价 
}sp[maxn]; 

bool cmp(Shop a,Shop b){//按单价进行排序 
	return a.percost>b.percost;
}
int main()
{
	//B1020月饼
	cin>>n>>d;
	for(int i=0;i<n;i++)	cin>>sp[i].store;
	for(int i=0;i<n;i++){
		cin>>sp[i].cost;
		sp[i].percost=sp[i].cost/sp[i].store;
	}	
	sort(sp,sp+n,cmp); 
//	int tmp=0,j=0;//需求变量的临时保存
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
//		d-=tmp;//需求减少 
//		j++;//下一个商品 
//	} 

	for(int j=0;j<n;j++){
		if(sp[j].store<=d){
			d-=sp[j].store;
			sum+=sp[j].cost;//全部售出 
		}else{
			sum+=sp[j].percost*d;
			break;
		}
	}
	printf("%.2f\n",sum);
	return 0;
}

