#include<bits/stdc++.h>
using namespace std;
long long A,B,D,sum;

int main()
{
	cin>>A>>B>>D;
	sum=A+B;
	int z[110],num;
	do{
		z[num++]=sum%D;
		sum=sum/D;
	}while(sum);
	
	while(num--){
		printf("%d",z[num]);	
	}
	cout<<endl;
	return 0;
}
