#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)   //�ж����� 
{
	if(n<2)
	   return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		  return 0;
	}
	return 1;
}
int isPingfang(int n)   //�ж�ƽ�� 
{
    int x = sqrt(n);
	if(x*x==n)
	    return 1;
	return 0;	
} 
int main()
{
	int n;
	scanf("%d",&n);
	int t = 1;   //1:ƽ�� 2������
	int flag[100005]={0};
	int number[100005];
	int round=1;
	while(1)
	{
		int count =0;
	    for(int i=1;i<=n;i++)
		{
		    if(flag[i]==1)
			   count++;	
		}	
		if(count==n-1)  //��ʣһ����� 
		{
			for(int i=1;i<=n;i++)
		    {
		        if(flag[i]==0)
			       printf("%d",i);
		    }	
			 break;
		}
		else
		{
			int index=1;
			int j = 1;
			while(j<=n-count)  //������λ�� 
			{
				if(flag[index]==0)
				{
					number[j]=index;
					index++;
					j++;
				}
				else
				   index++;
			}
			if(t==1)  //ƽ����out 
			{
				for(int j=1;j<=n-count;j++)
				{
					if(isPingfang(j)==1)
					   flag[number[j]]=1;
				}
			}
			else           //����out 
			{
				for(int j=1;j<=n-count;j++)
				{
					if(isPrime(j)==1)
					   flag[number[j]]=1;
				}
			
			}
			t=-t;
		}
	} 
 
}
