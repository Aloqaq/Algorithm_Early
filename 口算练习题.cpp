#include<bits/stdc++.h>
using namespace std;

int main()
{
	string result[55];//Êä³ö½á¹ûÎª×Ö·û´® 
	int len[55];
	char a;//´æ´¢ÔËËã·û
	int n,c,d;//n´æ´¢¸öÊý£¬cd´æ´¢Êý×Ö
	char s[101],b[10];//s´æ´¢×îÖÕ×Ö·û´®£¬bÁÙÊ±±äÁ¿
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b;
		if(b[0]>='a'&&b[0]<='z'){
			a=b[0];
			cin>>c>>d;
		}else{
			sscanf(b,"%d",&c);
			cin>>d;
		}
		memset(s,0,sizeof(s));//Çå¿Õ×Ö·û´®
		
		if(a=='a')
			sprintf(s,"%d+%d=%d",c,d,c+d);
		else if(a=='b')
			sprintf(s,"%d-%d=%d",c,d,c-d);
		else if(a=='c')
			sprintf(s,"%d*%d=%d",c,d,c*d);
		result[i]=s;//±£´æµ½×Ö·û´®Êý×é 
		len[i]=strlen(s);
	}
	for(int i=0;i<n;i++){
		cout<<result[i]<<endl
			<<len[i]<<endl;
	}	
	return 0;
 } 
