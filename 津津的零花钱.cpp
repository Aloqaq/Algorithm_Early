#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[13],b[13],have=0,t=0,sum1=0;
	for(int i=0;i<12;i++){//����ÿ�µ�Ԥ�� 
		cin>>a[i];
	}
	for(int i=0;i<12;i++){
		if(a[i]<=(300+have)){//Ԥ��С���㻨Ǯ 
			if((have+300-a[i])/100>=1){//�����ٵ�ʣ�� 	
				b[t++]=(have+300-a[i])/100;
				have=(have+300-a[i])-((have+300-a[i])/100)*100;//ӵ�еļ�ȥ������ļ���Ϊʣ��� 		
			}else{//û����
				have=have+300-a[i]; 		
			} 
		}else{//��֧ 
			cout<<"-"<<i+1<<endl;
			return 0;
		}
	} 
	for(int i=0;i<t;i++){
		sum1+=b[i];
	}
	cout<<have+sum1*100*1.2;
	return 0;
} 
