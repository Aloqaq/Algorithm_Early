#include<iostream>
using namespace std;
int Arr[]={10,6,-1,99,146,14,13,88,52};

//��ѡ������ 
void SelectSort(int A[],int len){
	cout<<"���ü�ѡ������"<<endl; 
	for(int i=0;i<len;i++){
		int k=i;
		for(int j=i;j<len;j++){
			if(A[j]<A[k])
				k=j;
		}
		int temp=A[i];
		A[i]=A[k];
		A[k]=temp;
	}
	
}


//ֱ�Ӳ�������
void InsertSort(int A[],int len){
	cout<<"����ֱ�Ӳ�������"<<endl; 
	int i=0,j=0;
	for(i=1;i<len;i++){
		if(A[i-1]>A[i]){
			int temp=A[i];
			for(j=i-1;A[j]>temp&&j>=0;j--){
				A[j+1]=A[j];
				
			}
			A[j+1]=temp;
		}	
	}
} 
int main()
{
	int len=sizeof(Arr)/sizeof(Arr[0]);
	cout<<"ԭʼ����Ϊ��"<<endl;
	for(int i=0;i<len;i++) 
		cout<<Arr[i]<<'\t';
	cout<<endl;
	
	//SelectSort(Arr,len);
	InsertSort(Arr,len);
	
	
	for(int i=0;i<len;i++)
		cout<<Arr[i]<<'\t';
	cout<<endl;
	return 0;
}
