#include<bits/stdc++.h>
#define INF 1000000000   //����INF
using namespace std;
int n,m,x,y,z,amap[1501][1501];    //�ڽӾ�����
int main(){
    cin>>n>>m;   //��������ͱ���
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j) amap[i][j]=0;    //�ڽӾ��󸳳�ֵ
            else amap[i][j]=INF;    
    for(int i=0;i<m;i++){
        cin>>x>>y>>z;
        x--,y--;   //��Ŵ�1~n��ע�⴦������Խ������
        amap[x][y]=min(amap[x][y],-z);   //���������ж���·ʱȡ�������
    }
    for(int k=0;k<n;k++)   //Floydģ��
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(amap[i][k]!=INF&&amap[k][j]!=INF)
                    amap[i][j]=min(amap[i][j],amap[i][k]+amap[k][j]);
    if(amap[0][n-1]==INF) cout<<-1;   //�ж��������Ƿ���ͨ
    else cout<<-amap[0][n-1];  //�൱��map[0][n-1]*-1
}
