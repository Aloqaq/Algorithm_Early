#include<iostream>
using namespace std;
const int maxn=11;
int n,P[maxn];
bool hashTable[maxn]={false};//P为当前排列，hashTable记录整数x是否已经在P中
//当前处理排列的第index号位
void generateP(int index){
    if(index==n+1){//递归边界，打印数列
        for(int i=1;i<=n;i++)
        	cout<<P[i];
        cout<<endl;
        return;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){//x如果不在P数组中
            P[index]=x;//放入数组
            hashTable[x]=true;//修改标记
            generateP(index+1);//处理下一位
            hashTable[x]=false;//当前排列处理完则全部还原状态 
        }
    }
}

int main()
{
    n=6;
    generateP(1);//从1开始处理
    return  0;
}