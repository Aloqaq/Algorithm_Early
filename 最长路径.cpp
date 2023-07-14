#include<bits/stdc++.h>
#define INF 1000000000   //定义INF
using namespace std;
int n,m,x,y,z,amap[1501][1501];    //邻接矩阵真
int main(){
    cin>>n>>m;   //输入点数和边数
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j) amap[i][j]=0;    //邻接矩阵赋初值
            else amap[i][j]=INF;    
    for(int i=0;i<m;i++){
        cin>>x>>y>>z;
        x--,y--;   //编号从1~n，注意处理数组越界问题
        amap[x][y]=min(amap[x][y],-z);   //当两个点有多条路时取最长的那条
    }
    for(int k=0;k<n;k++)   //Floyd模板
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(amap[i][k]!=INF&&amap[k][j]!=INF)
                    amap[i][j]=min(amap[i][j],amap[i][k]+amap[k][j]);
    if(amap[0][n-1]==INF) cout<<-1;   //判断两个点是否连通
    else cout<<-amap[0][n-1];  //相当于map[0][n-1]*-1
}
