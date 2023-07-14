#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,nmax;
	cin>>m>>n>>nmax;
	int flag=0;
	for(int a=1;a<=nmax;a++)
	{
		if(flag==1)
		   break;
		for(int b=a;b<=nmax;b++)
		{
			if(flag==1)
			   break;
			for(int c=1;c<=nmax;c++)
			{
				if(flag==1)
				   break;
				for(int d=c;d<=nmax;d++)
				{
                    int x1 = a*a*a + b*b*b;
                    int x2 = c*c*c + d*d*d;
                    if(m*x2==x1*n)               //×ª»»³É³Ë·¨ÅÐ¶Ï
                    {
                    	flag=1;
                    	cout<<a<<" "<<b<<" "<<c<<" "<<d;
                    	break;
					}
				}
			}
		}
	}
	if(flag==0)
	   printf("No Solution in [1, %d] for %d/%d.",nmax,m,n);
} 
