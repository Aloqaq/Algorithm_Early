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
	int p=round(1.0*rand()/RAND_MAX*(right-left)+left);//生成随机的p 
	swap(A[p],A[left]);//用A[p]代替原来的A[left],实现随机 
	int temp=A[left];//当前基准数 
	while(left<right){
		while(left<right&&A[right]>temp)	right--;//反复左移right
		A[left]=A[right];//right左移到头，开始右移left
		while(left<right&&A[left]<=temp)	left++;//反复右移 
		A[right]=A[left]; 
	}
	A[left]=temp;//左右相遇，将基准赋值给最终位置 
	return left;//返回相遇的下标，以作新的划分 
} 

void QuickSort(int A[],int left,int right){//快排函数 
	if(left>=right){
		return ;
	} 
	if(right-left+1<10){//小区间插入排序 
		insertSort(A,left,right);
		return;
	}
	//划分
	int pos=randPartition(A,left,right);
	QuickSort(A,left,pos-1);//左区间递归快排 
	QuickSort(A,pos+1,right); //右区间递归快排 	
} 

int main(){
	cin>>n;
	for(int i=0;i<n;i++){//输入 
		cin>>a[i];
	}
	
	QuickSort(a,0,n-1);//快速排序 
	
	for(int i=0;i<n;i++){//输入 
		cout<<a[i]<<" ";
	}
	return 0;
}
