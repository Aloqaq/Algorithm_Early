#include<iostream>
#include<string.h>
using namespace std;

int num;//����
char ch;//����
int main()
{
    int temp=0;//�ݴ�����
    int layer;//����
    cin>>num>>ch;
    for(layer=1;temp<=num-1;layer++)//��������������ӡ
    {
        int plus=1+layer*2;
        temp+=2*plus;
    }
    //����������һ�㣬�ٴ��ж�
    if(temp>num-1){//����������
        layer--;
    }
    layer--;
    int print=1;
    for(int i=1;i<=layer;i++){
        print+=2*(1+2*i);
    }
    int ret=num-print;//�õ�ʣ�������
    int top=layer*2+1;//�õ������ 
    
    //��ӡͼ��
    for(int i=0;i<layer;i++){
        int t=2*(layer-i)+1;
        int width=(top-t)/2;
        
        while(width--) 
       		cout<<" ";
        while(t--)	
        	cout<<ch;
//		width=(top-t)/2;	
//        while(width--) 
//       		cout<<" ";
        cout<<endl;
    }
    
    int width;
    width=(top-1)/2;
    while(width--){
    	cout<<" ";
	}
    cout<<ch;
//    width=(top-1)/2;
//    while(width--){
//    	cout<<" ";
//	}
	cout<<endl;
	
    for(int i=0;i<layer;i++){
        int t=2*(i+1)+1;
        int width=(top-t)/2;
        
        while(width--) 
        		cout<<" ";
        while(t--)	
        	cout<<ch;
//        width=(top-t)/2;
//        while(width--) 
//        		cout<<" ";
        cout<<endl;
    }
    cout<<ret<<endl;
    return 0;
    
}
