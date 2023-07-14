#include<bits/stdc++.h>
using namespace std;

const int MAXN=110;

int judge(int A[MAXN],int B[MAXN],int num){

	//按照插入排序筛选
	bool flagInsert=true;
	
	for(int i=0;i<num;i++){
		//前半部分有序
		if(B[i]<B[i+1]){
			continue;
		}
		else{
			for(int k=i+1;k<num;k++){//处理剩下的部分
				if(B[k]==A[k]){
					continue;
				}else{
					flagInsert=false;
				}
			}
			
		}
		
	}
	if(flagInsert==true)
		return 1;
	else
		return 0;//归并排序
	
}


int main()
{
	int N;
	int init[MAXN],mid[MAXN];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>init[i];
	}
	for(int i=0;i<N;i++){
		cin>>mid[i];
	}

	int ret=judge(init,mid,N);
	if(ret==1){
		cout<<"Insertion Sort"<<endl;
		for(int i=0;i<N;i++){
			if(mid[i]<mid[i+1]){
				continue;
			}else{
				for(int k=0;k<i+1;k++){
					int temp=mid[i+1];
					if(temp<mid[k]){
						for(int j=i+1;j>=k;j--){
							mid[j]=mid[j-1];
						}
						mid[k]=temp;
					}
				}
				break;
			}
		}
	}	
	else{
		cout<<"Merge Sort"<<endl;

		//判断排序轮次
		int times=1;
		bool flag=true;
		for(int i=1;i<=N;){//归并的每组划分
			for(int j=1;j<i;j++){
				if(mid[j]>mid[j+1]){
					times=i;
					flag=false;
					break;
				}
			}
			i*=2;
			if(flag==false)	break;
		}
		times*=2;
		for(int i=0;i<times;){
			sort(mid,mid+times);
			i+=times;
		}
	}	

	for(int i=0;i<N;i++){
        cout<<mid[i];
        if(i!=N-1)  cout<<" ";
    }
	cout<<endl;
	return 0;
}