#include<bits/stdc++.h>
using namespace std;
const int maxn=205;
int i,n,num,sum; 
char text[maxn*maxn],str[maxn];//text：最终字符串，str：缓冲字符串

int main()
{
    cin>>str;
    n=strlen(str);//输入第一个字符串，存入缓冲字符串，并计算n值
    strcat(text,str);//将str连接到text后，其实也可以用strcpy的，用处相同
    for(i=2;i<=n;i++)//因为已经连接第一个了，因此循环从第二行字符开始
    {
        cin>>str;
        strcat(text,str);//输入并连接
    }
    cout<<n<<" ";//输出n值，记住在每个输出后带上空格
    for(i=0,sum=0,num='0';i<=strlen(text);i++)//从text[i]开始循环
        if(num==text[i])//判断这个字符是否与上一个字符相等（第一个字符与‘0’做判断）
            sum++;//如果相等，sum加一
        else
        {
            num=text[i];
            cout<<sum<<" ";//反之，输出sum值（带空格），并初始化num与text
            sum=1;
        }
    return 0;
}









/*原版 
int main()
{
	//压缩码
	int n,i,j,k; 
	memset(a,-1,sizeof(a));
	cin>>n;
	int sum=0;
	for(i=1;sum<n*n;i++){
		cin>>b[i];
		sum+=b[i];
	}
	
	int c=1;
	for(j=1;j<i;j++){
		if(j%2==1){
			for(k=1;k<=b[j];k++){
				cout<<"0";
				if(c%n==0)	cout<<endl;
				c++;	
			}
				
		}else{
			for(k=1;k<=b[j];k++){
				cout<<"1";
				if(c%n==0)	cout<<endl;
				c++;
			}	
		}
	}
	return 0;
 } */
