#include<iostream>
#include<string.h>
using namespace std;

int num;//整数
char ch;//符号
int main()
{
    int temp=0;//暂存数据
    int layer;//层数
    cin>>num>>ch;
    for(layer=1;temp<=num-1;layer++)//计算层数，方便打印
    {
        int plus=1+layer*2;
        temp+=2*plus;
    }
    //结果将会溢出一层，再次判定
    if(temp>num-1){//出现溢出情况
        layer--;
    }
    layer--;
    int print=1;
    for(int i=1;i<=layer;i++){
        print+=2*(1+2*i);
    }
    int ret=num-print;//得到剩余的数量
    int top=layer*2+1;//得到最大宽度 
    
    //打印图形
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
