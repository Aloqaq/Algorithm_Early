#include<bits/stdc++.h>
using namespace std;
const int maxn=100010;
int n,a[maxn];

void insertSort(int A[],int left,int right){
	for(int i=left+1;i<=right;i++){
		for(int j=i;j>0;j--){
			if(A[j]<A[j-1]){
				swap(A[j],A[j-1]);
			}
		}
	}
} 
int randPartition(int A[],int left,int right){ 
	int p=round(1.0*rand()/RAND_MAX*(right-left)+left);//���������p 
	swap(A[p],A[left]);//��A[p]����ԭ����A[left],ʵ����� 
	int temp=A[left];//��ǰ��׼�� 
	while(left<right){
		while(left<right&&A[right]>temp)	right--;//��������right
		A[left]=A[right];//right���Ƶ�ͷ����ʼ����left
		while(left<right&&A[left]<=temp)	left++;//�������� 
		A[right]=A[left]; 
	}
	A[left]=temp;//��������������׼��ֵ������λ�� 
	return left;//�����������±꣬�����µĻ��� 
} 

void QuickSort(int A[],int left,int right){//���ź��� 
	if(left>=right){
		return ;
	} 
	if(right-left+1<10){//С����������� 
		insertSort(A,left,right);
		return;
	}
	//����
	int pos=randPartition(A,left,right);
	QuickSort(A,left,pos-1);//������ݹ���� 
	QuickSort(A,pos+1,right); //������ݹ���� 	
} 

int main(){
	cin>>n;
	for(int i=0;i<n;i++){//���� 
		cin>>a[i];
	}
	
	QuickSort(a,0,n-1);//�������� 
	
	for(int i=0;i<n;i++){//���� 
		cout<<a[i]<<" ";
	}
	return 0;
}
