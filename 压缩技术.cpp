#include<bits/stdc++.h>
using namespace std;
const int maxn=205;
int i,n,num,sum; 
char text[maxn*maxn],str[maxn];//text�������ַ�����str�������ַ���

int main()
{
    cin>>str;
    n=strlen(str);//�����һ���ַ��������뻺���ַ�����������nֵ
    strcat(text,str);//��str���ӵ�text����ʵҲ������strcpy�ģ��ô���ͬ
    for(i=2;i<=n;i++)//��Ϊ�Ѿ����ӵ�һ���ˣ����ѭ���ӵڶ����ַ���ʼ
    {
        cin>>str;
        strcat(text,str);//���벢����
    }
    cout<<n<<" ";//���nֵ����ס��ÿ���������Ͽո�
    for(i=0,sum=0,num='0';i<=strlen(text);i++)//��text[i]��ʼѭ��
        if(num==text[i])//�ж�����ַ��Ƿ�����һ���ַ���ȣ���һ���ַ��롮0�����жϣ�
            sum++;//�����ȣ�sum��һ
        else
        {
            num=text[i];
            cout<<sum<<" ";//��֮�����sumֵ�����ո񣩣�����ʼ��num��text
            sum=1;
        }
    return 0;
}









/*ԭ�� 
int main()
{
	//ѹ����
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
